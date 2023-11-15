/**
 * @file publisher.cpp
 * @author ssarjun@umd.edu
 * @brief This publisher program is used publish custom messages
 */

#include <functional>
#include <memory>
#include <string>

#include "beginner_tutorials/srv/change_string.hpp"
#include "rclcpp/logger.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

// parameter types
using PARAMETER_EVENT = std::shared_ptr<rclcpp::ParameterEventHandler>;
using PARAMETER_HNADLE = std::shared_ptr<rclcpp::ParameterCallbackHandle>;

/**
 * @brief Publisher class which has publisher Node and 
 *         server node which handle the change in the string
 *
 */
class Publisher : public rclcpp::Node {
 public:
  Publisher() : Node("publisher"), count_(0) {
    try {
      publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

      auto param_desc = rcl_interfaces::msg::ParameterDescriptor{};
      param_desc.description =
          "This parameter is updated by given argument in launch file and is "
          "used by publisher and subscriber node!";
      this->declare_parameter("frequency", 2, param_desc);
      auto frequency =
          this->get_parameter("frequency").get_parameter_value().get<int>();

      RCLCPP_INFO_STREAM(this->get_logger(), "Param value : " << frequency);
      timer_ = this->create_wall_timer(
          std::chrono::milliseconds(int((1000 / frequency))),
          std::bind(&Publisher::timer_callback, this));
      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialize the Publisher");
      server = this->create_service<beginner_tutorials::srv::ChangeString>(
          "service_node",
          std::bind(&Publisher::changeString, this, std::placeholders::_1,
                    std::placeholders::_2));
      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialize the Server");

    } catch (...) {
      RCLCPP_ERROR_STREAM(this->get_logger(), "Error encountered at time of initialization!!"); RCLCPP_FATAL_STREAM(this->get_logger(), "Publisher may not work!!");
    }
  }

  /**
   * @brief Callback function for processing server request and generate
   * response
   *
   * @param request : string
   * @param response :string
   */
  void changeString(
      const std::shared_ptr<beginner_tutorials::srv::ChangeString::Request>
          request,
      std::shared_ptr<beginner_tutorials::srv::ChangeString::Response>
          response) {
    response->op = request->ip + " Edited by service";

    server_resp_message = response->op;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\ninput: '%s'",
                request->ip.c_str());  //+
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: '%s'",
                response->op.c_str());
  }

 private:
  /**
   * @brief timer callback publish the message on topic after certain interval
   * of time
   *
   */
  void timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = server_resp_message;

    RCLCPP_DEBUG_STREAM(this->get_logger(), "Able to insert message data ");
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());

    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<beginner_tutorials::srv::ChangeString>::SharedPtr server;
  std::string server_resp_message = "Hey there, this is ROS2";
  size_t count_;
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Publisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();

  RCLCPP_WARN_STREAM(node->get_logger(), "Shutting Down!! " << 4);
  return 0;
}
