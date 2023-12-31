/**
 * @file server_client.cpp
 * @author ssarjun@umd.edu
 * @brief This program is designed for service client setup
 */
#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <string>

#include "beginner_tutorials/srv/change_string.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

/**
 * @brief ServerClient class which create a node to give the new string to server.
 * @details new string given by user using argument are then send to server, which 
 * is in publisher node, and then server edit the string and save for further
 * use by publisher for 'chatter' topic.
 * 
 */
class ServerClient : public rclcpp::Node {
 public:
  ServerClient() : Node("server_client") {
    client = this->create_client<beginner_tutorials::srv::ChangeString>(
        "service_node");
  }
  auto getRequest(char **argv) {
    auto request = std::make_shared<
        beginner_tutorials::srv::ChangeString::Request>();  // CHANGE
    request->ip = argv[1];
    return request;
  }

  rclcpp::Client<beginner_tutorials::srv::ChangeString>::SharedPtr client;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  std::shared_ptr<ServerClient> SClient = std::make_shared<ServerClient>();
  while (!SClient->client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),
                   "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
                "service not available, waiting again...");
  }
  auto request = SClient->getRequest(argv);
  auto result = SClient->client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(SClient, result) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "change string '%s'",
                result.get()->op.c_str());
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),
                 "Failed to call service change_string");  // CHANGE
  }

  rclcpp::shutdown();
  return 0;
}