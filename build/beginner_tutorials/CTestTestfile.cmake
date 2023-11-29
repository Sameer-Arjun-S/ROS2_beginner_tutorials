# CMake generated Testfile for 
# Source directory: /home/sas/ros2_ws/beginner_tutorials
# Build directory: /home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(beginner_tutorials_test "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials/test_results/beginner_tutorials/beginner_tutorials_test.gtest.xml" "--package-name" "beginner_tutorials" "--output-file" "/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials/ament_cmake_gtest/beginner_tutorials_test.txt" "--command" "/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials/beginner_tutorials_test" "--gtest_output=xml:/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials/test_results/beginner_tutorials/beginner_tutorials_test.gtest.xml")
set_tests_properties(beginner_tutorials_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials/beginner_tutorials_test" TIMEOUT "60" WORKING_DIRECTORY "/home/sas/ros2_ws/beginner_tutorials/build/beginner_tutorials" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/sas/ros2_ws/beginner_tutorials/CMakeLists.txt;70;ament_add_gtest;/home/sas/ros2_ws/beginner_tutorials/CMakeLists.txt;0;")
subdirs("beginner_tutorials__py")
subdirs("gtest")
