/**
 * @file subscriber.cpp
 * @author ssarjun@umd.edu
 * @brief This subscriber program is used to print the message
 * sent by the publisher to topic
 * @copyright Copyright (c) 2023 Sameer Arjun S
 * This code is licensed under the Apache 2.0 License. Please see the
 * accompanying LICENSE file for the full text of the license.
 */

#include <functional>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
using std::placeholders::_1;

/**
 * @brief The class subscriber captures the message whenever published
 * to topic
 *
 */
class Subscriber : public rclcpp::Node {
 public:
  /**
   * @brief Construct a Subscriber object
   *
   */
  Subscriber() : Node("subscriber") {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "topic", 10, std::bind(&Subscriber::topic_callback, this, _1));
  }

 private:
  /**
   * @brief A callback method to capture the message whenever published
   *
   * @param msg
   */
  void topic_callback(const std_msgs::msg::String& msg) const {
    RCLCPP_INFO_STREAM(this->get_logger(), "ROS2 Humble Heard: " << msg.data);
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Subscriber>());
  rclcpp::shutdown();
  return 0;
}