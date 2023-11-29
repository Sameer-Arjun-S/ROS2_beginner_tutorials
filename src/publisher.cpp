/**
 * @file publisher.cpp
 * @author ssarjun@umd.edu
 * @brief This publisher program is used publish custom messages
 * @copyright Copyright (c) 2023 Sameer Arjun S
 * This code is licensed under the Apache 2.0 License. Please see the
 * accompanying LICENSE file for the full text of the license.
 */

#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <beginner_tutorials/srv/new_service.hpp>
#include <chrono>
#include <functional>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <memory>
#include <rclcpp/executors.hpp>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <string>
using namespace std::chrono_literals;

/**
 * @brief The class creates a publisher object with bind method 
 * 
 */
class Publisher : public rclcpp::Node {
 public:
  Publisher() : Node("publisher"), count_(0) {
    // Parameter for publisher frequency
    auto pub_frequency_info = rcl_interfaces::msg::ParameterDescriptor();
    pub_frequency_info.description = "Custom frequency for publisher";

    // Initializing default frequency
    this->declare_parameter("frequency", 1.0, pub_frequency_info);
    auto pub_frequency = this->get_parameter("frequency")
                             .get_parameter_value()
                             .get<std::float_t>();
    if (pub_frequency < 0.0) {
      RCLCPP_FATAL_STREAM_ONCE(rclcpp::get_logger("publisher"),
                               "Frequency is negative");
      exit(1);
    } else if (pub_frequency == 0.0) {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("publisher"),
                          "Frequency is zero");
    } else if (pub_frequency > 100.0) {
      RCLCPP_WARN_STREAM_ONCE(rclcpp::get_logger("publisher"),
                              "Frequency more than 100");
    } else {
      RCLCPP_DEBUG_STREAM(rclcpp::get_logger("publisher"),
                          "Frequency is " << pub_frequency << " Hz");

      RCLCPP_INFO_STREAM(rclcpp::get_logger("publisher"),
                         "Publishing at " << pub_frequency << " Hz");
    }

    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    auto time =
        std::chrono::milliseconds(static_cast<int>(1000 / pub_frequency));
    timer_ = this->create_wall_timer(
        time, std::bind(&Publisher::timer_callback, this));
    // Creation of service object
    auto serviceCallbackPtr =
        std::bind(&Publisher::change_message, this,
                  std::placeholders::_1, std::placeholders::_2);

    service_ = create_service<beginner_tutorials::srv::NewService>(
        "new_service", serviceCallbackPtr);
  }

 private:
  /**
   * @brief This is for publishlishing
   *
   */
  void timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = "Hey there, this is ROS2! " + std::to_string(count_++);
    RCLCPP_INFO_STREAM(rclcpp::get_logger("publisher"),
                       "Publishing: " << message.data);
    publisher_->publish(message);
    broadcast_transform();
  }
  /**
   * @brief This is used to change the message 
   * @param request , Parameter for service call request
   * @param response , Parameter for service call response
   */
  void change_message(
      const std::shared_ptr<beginner_tutorials::srv::NewService::Request>
          request,
      std::shared_ptr<beginner_tutorials::srv::NewService::Response>
          response) {
    response->response_message =
        request->request_message + "Hey there, the service is modified";
    RCLCPP_INFO_STREAM(rclcpp::get_logger("publisher"),
                       "Request message: " << request->request_message);
    RCLCPP_INFO_STREAM(rclcpp::get_logger("publisher"),
                       "Response message: " << response->response_message);
  }
  void broadcast_transform() {
    tf_static_broadcaster_ =
        std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = this->get_clock()->now();
    t.header.frame_id = "world";
    t.child_frame_id = "talk";
    // Translation component initialization in meters
    t.transform.translation.x = 0.2;
    t.transform.translation.y = 0.0;
    t.transform.translation.z = 0.6;
    t.transform.rotation.x = 0.0;
    t.transform.rotation.y = 0.0473595;
    t.transform.rotation.z = 0.0;
    t.transform.rotation.w = 0.0;
    tf_static_broadcaster_->sendTransform(t);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<beginner_tutorials::srv::NewService>::SharedPtr service_;
  size_t count_;
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_broadcaster_;
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Publisher>());
  rclcpp::shutdown();
  return 0;
}