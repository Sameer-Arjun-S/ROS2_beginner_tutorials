/**
 * @file publisher.cpp
 * @author ssarjun@umd.edu
 * @brief This publisher program is used publish custom messages
 * @copyright Copyright (c) 2023 Sameer Arjun S
 * This code is licensed under the Apache 2.0 License. Please see the
 * accompanying LICENSE file for the full text of the license.
 */

#include <beginner_tutorials/srv/change_string.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <rcl_interfaces/msg/parameter_descriptor.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>

using namespace std::chrono_literals;

/**
 * @brief This class represents ROS 2 nodes that publish messages 
 */
class Publisher : public rclcpp::Node {
 public:
  /**
   * @brief Constructor initialization
   * @param transformations A vector with parameters for static transforms
   */
  explicit Publisher(const std::vector<std::string>& transformations)
      : Node("publisher"), count1(0) {
    try {
      // Create a publisher for string messages
      publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

      // Declare a parameter for the publishing frequency
      auto param_desc = rcl_interfaces::msg::ParameterDescriptor{};
      param_desc.description =
          "This parameter is updated with the argument in launch file ";
      this->declare_parameter("frequency", 2, param_desc);

      // Getting freq value
      auto frequency =
          this->get_parameter("frequency").get_parameter_value().get<int>();

      RCLCPP_INFO_STREAM(this->get_logger(),
                         "Parameter 'frequency' set to: " << frequency);

      // Create a timer for publishing messages based on the frequency
      timer_ = this->create_wall_timer(
          std::chrono::milliseconds(1000 / (frequency != 0 ? frequency : 1)),
          std::bind(&Publisher::timer_callback, this));

      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialized the Publisher");

      // Create a service for changing the string
      server_ = this->create_service<beginner_tutorials::srv::ChangeString>(
          "service_node",
          std::bind(&Publisher::changeString, this, std::placeholders::_1,
                    std::placeholders::_2));

      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialized the Server");

      // Create a broadcaster for static transforms
      tf_static_broadcaster_ =
          std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

      // Generate and send static transforms
      make_transforms(transformations);
      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialized the transform");
    } catch (const std::exception& e) {
      RCLCPP_ERROR_STREAM(this->get_logger(),
                          "Initialization error: " << e.what());
      RCLCPP_FATAL_STREAM(this->get_logger(), "Publisher error");
    }
  }

  /**
   * @brief Callback function for the service that changes a string.
   * @param request The service request.
   * @param response The service response.
   */
  void changeString(
      const std::shared_ptr<beginner_tutorials::srv::ChangeString::Request>
          request,
      std::shared_ptr<beginner_tutorials::srv::ChangeString::Response>
          response) {
    // Modify the received string and send it back as a response
    response->op = request->ip + " Edited by service";
    server_resp_message = response->op;

    RCLCPP_INFO(this->get_logger(), "Received service request\nInput: '%s'",
                request->ip.c_str());
    RCLCPP_INFO(this->get_logger(), "Sending back response: '%s'",
                response->op.c_str());
  }

 private:
  /**
   * @brief Timer callback function for publishing messages
   */
  void timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = server_resp_message;
    RCLCPP_DEBUG_STREAM(this->get_logger(), "Inserted message data");
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
  }

  /**
   * @brief Creates static transformations based on the provided parameters.
   * @param transformation A vector containing parameters for static
   * transformations.
   */
  void make_transforms(const std::vector<std::string>& transformation) {
    if (transformation.size() < 6) {
      RCLCPP_WARN(this->get_logger(),
                  "Invalid parameters for transformation");
      return;
    }

    // Static transform message
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = this->now();
    t.header.frame_id = "world";
    t.child_frame_id = transformation[0];

    // Translation data initialization
    t.transform.translation.x = std::stod(transformation[1]);
    t.transform.translation.y = std::stod(transformation[2]);
    t.transform.translation.z = std::stod(transformation[3]);

    // Adding the rotation information
    tf2::Quaternion q;
    q.setRPY(std::stod(transformation[4]), std::stod(transformation[5]),
             std::stod(transformation[6]));

    t.transform.rotation.x = q.x();
    t.transform.rotation.y = q.y();
    t.transform.rotation.z = q.z();
    t.transform.rotation.w = q.w();

    // The static transform
    tf_static_broadcaster_->sendTransform(t);
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<beginner_tutorials::srv::ChangeString>::SharedPtr server_;
  std::string server_resp_message = "Hey there, this is ROS2!";
  size_t count1;

  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_broadcaster_;
};

/**
 * @brief Main function 
 * @param argc Number of command line arguments.
 * @param argv Command line arguments.
 * @return 0 on success, 1 on failure.
 */
int main(int argc, char* argv[]) {
  if (argc < 7) {
    RCLCPP_WARN(rclcpp::get_logger("rclcpp"),
                "Invalid number of parameters\nusage: "
                "$ ros2 run beginner_tutorials talker "
                "child_frame_name tx ty tz roll pitch yaw %d",
                argc);
    return 1;
  }
  // if (strcmp(argv[1], "world") == 0) {
  //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
  //               "Your static turtle name cannot be world");
  //   return 1;
  //}

  // Copy command line arguments into a vector
  std::vector<std::string> transformations(argv + 1, argv + argc);
  rclcpp::init(argc, argv);
  // Creating an instance of Publisher class
  auto node = std::make_shared<Publisher>(transformations);
  rclcpp::spin(node);
  rclcpp::shutdown();
  RCLCPP_WARN_STREAM(node->get_logger(), "Program Shutting Down! " << 4);
  return 0;
  }