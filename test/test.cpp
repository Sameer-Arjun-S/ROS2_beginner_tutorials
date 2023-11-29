/**
 * @file test.cpp
 * @author Sameer Arjun S
 * @brief This test file is used to test the number of publishers we have
 * @copyright Copyright (c) 2023 Sameer Arjun S
 * This code is licensed under the Apache 2.0 License. Please see the
 * accompanying LICENSE file for the full text of the license.
 *
 */

#include <gtest/gtest.h>
#include <stdlib.h>
#include <rclcpp/executor.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

/**
 * @brief This creates a shared node for testing the code
 */
class TestNode : public testing::Test {
 protected:
  rclcpp::Node::SharedPtr node_;
};

/**
 * @brief Construct a new test object, which will test the publishers count.
 *
 * This test checks for the number of publishers for a specific topic
 */
TEST_F(TestNode, test_for_publishers_count) {
  // Creation of testing node
  node_ = std::make_shared<rclcpp::Node>("test_publisher_count");
  auto test_publisher =
      node_->create_publisher<std_msgs::msg::String>("chatter", 1.0);
  auto publishers_number = node_->count_publishers("chatter");
  EXPECT_EQ(1, static_cast<int>(publishers_number));
}

/**
 * @brief Main function for running tests
 *
 * This function initializes ROS 2 and runs Google Test
 */
int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  int result = RUN_ALL_TESTS();
  rclcpp::shutdown();
  return result;
}