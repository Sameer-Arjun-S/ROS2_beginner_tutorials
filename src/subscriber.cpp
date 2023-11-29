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

/**
 * @brief A simple ROS 2 node that subscribes to messages on the 'chatter'
 * topic.
 */
class Subscriber : public rclcpp::Node {
 public:
  /**
   * @brief Constructor for the Subscriber class.
   */
  Subscriber() : Node("subscriber") {
    try {
      // Create a subscription to the 'chatter' topic
      subscription_ = this->create_subscription<std_msgs::msg::String>(
          "chatter", 10,
          std::bind(&Subscriber::topic_callback, this, std::placeholders::_1));

      // Log initialization success
      RCLCPP_DEBUG_STREAM(this->get_logger(), "Initialized the Subscriber");
    } catch (const std::exception& e) {
      // Log initialization error and exit
      RCLCPP_ERROR_STREAM(this->get_logger(),
                          "Error during initialization: " << e.what());
      RCLCPP_FATAL_STREAM(this->get_logger(), "Subscriber error!");
    }
  }

 private:
  /**
   * @brief Callback function for the 'chatter' topic
   * @param msg The received message 
   */
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const {
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr
      subscription_;  
};

/**
 * @brief Main function for subscriber
 * @param argc Number of command-line arguments
 * @param argv Array of command-line arguments
 */
int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  try {
    auto node = std::make_shared<Subscriber>();
    rclcpp::spin(node);
  } catch (const std::exception& e) {
    // Log initialization error
    RCLCPP_ERROR_STREAM(rclcpp::get_logger("rclcpp"),
                        "Exception in main: " << e.what());
    RCLCPP_FATAL_STREAM(rclcpp::get_logger("rclcpp"),
                        "Node initialization failed!");
  }
  rclcpp::shutdown();
  RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Program Shutting Down!! ");
  return 0;
}