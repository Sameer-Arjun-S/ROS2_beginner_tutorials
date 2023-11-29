## ROS 2 Programming exercise
Creating a subscriber and publisher in ROS2

### Author
Sameer Arjun S

### Building the ROS package
```bash
# Source ROS
source /opt/ros/humble/setup.bash
# Navigate to workspace
cd ~/ros2_ws/src
git clone https://github.com/Sameer-Arjun-S/ROS_beginner_tutorials.git

# Navigate to home directory
cd ..
# Install rosdep dependencies before building the package
rosdep install -i --from-path src --rosdistro humble -y
# Build the package 
colcon build --packages-select beginner_tutorials
# Source the package
. install/setup.bash
# Run the publisher
ros2 run beginner_tutorials talker
# Run the subscriber
ros2 run beginner_tutorials listener
# Running both publisher and subscriber at the same time
ros2 launch beginner_tutorials custom_launch.yaml frequency:=1
```

### Running service client
```
ros2 run beginner_tutorials server_client <new_string_to_publish>
```
### ROS2 Bags
```
# Make a new directory for ROS bags in package
mkdir bags

# Run the bag
ros2 bag record chatter

# Review the recording
ros2 bag info recording_bag_name
```

### tf2 Frames
```
# Run the talker frame
ros2 run beginner_tutorials talker man 0 1 0 0 0 0

# Echo the frame 
ros2 run tf2_ros tf2_echo world man
```

### CppCheck
```bash
# If you need to install cppcheck, do
sudo apt install cppcheck

# Run in the top-level project directory (eg., in cpp-boilerplate-v2/)
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingInclude $( find . -name *.cpp | grep -vE -e "^./build/" )
```

### CppLint
```bash
# You may need to install cpplint:
sudo apt install cpplint

# run in the top-level project directory (eg., in cpp-boilerplate-v2/)
cpplint --filter="-legal/copyright" $( find . -name *.cpp | grep -vE -e "^./build/" )
```

### Results
```
# Publisher Results
[INFO] [1699397176.102702604] [Publisher]: Publishing: 'Hey there, ROS2 here! 0'
[INFO] [1699397176.603165787] [Publisher]: Publishing: 'Hey there, ROS2 here! 1'
[INFO] [1699397177.102563711] [Publisher]: Publishing: 'Hey there, ROS2 here! 2'
[INFO] [1699397177.602823768] [Publisher]: Publishing: 'Hey there, ROS2 here! 3'
[INFO] [1699397178.103038640] [Publisher]: Publishing: 'Hey there, ROS2 here! 4'
[INFO] [1699397178.603064097] [Publisher]: Publishing: 'Hey there, ROS2 here! 5'
[INFO] [1699397179.102830003] [Publisher]: Publishing: 'Hey there, ROS2 here! 6'
[INFO] [1699397179.602780390] [Publisher]: Publishing: 'Hey there, ROS2 here! 7'
[INFO] [1699397180.102675002] [Publisher]: Publishing: 'Hey there, ROS2 here! 8'
[INFO] [1699397180.602704837] [Publisher]: Publishing: 'Hey there, ROS2 here! 9'
[INFO] [1699397181.102878525] [Publisher]: Publishing: 'Hey there, ROS2 here! 10'
[INFO] [1699397181.602585621] [Publisher]: Publishing: 'Hey there, ROS2 here! 11'


# Subscriber Results
[INFO] [1699397206.604351908] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 1'
[INFO] [1699397207.103754520] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 2'
[INFO] [1699397207.605412771] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 3'
[INFO] [1699397208.104174591] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 4'
[INFO] [1699397208.603850528] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 5'
[INFO] [1699397209.104455634] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 6'
[INFO] [1699397209.605389710] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 7'
[INFO] [1699397210.106682374] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 8'
[INFO] [1699397210.604083570] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 9'
[INFO] [1699397211.103319098] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 10'
[INFO] [1699397211.603818082] [Subscriber]: Hey, I heard: 'Hey there, ROS2 here! 11'

# ROS Bag results
sas@sas-virtual-machine:~/ros2_ws/beginner_tutorials/rosbag2_2023_11_29-16_07_00$ ros2 bag info rosbag2_2023_11_29-16_07_00_0.db3 

closing.

closing.
[INFO] [1701292098.071024651] [rosbag2_storage]: Opened database 'rosbag2_2023_11_29-16_07_00_0.db3' for READ_ONLY.

Files:             rosbag2_2023_11_29-16_07_00_0.db3
Bag size:          24.0 KiB
Storage id:        sqlite3
Duration:          22.14s
Start:             Nov 29 2023 16:07:02.67 (1701292022.67)
End:               Nov 29 2023 16:07:24.82 (1701292044.82)
Messages:          45
Topic information: Topic: /chatter | Type: std_msgs/msg/String | Count: 45 | Serialization Format: cdr

# tf2_Results
At time 0.0
- Translation: [0.000, 1.000, 0.000]
- Rotation: in Quaternion [0.000, 0.000, 0.000, 1.000]
- Rotation: in RPY (radian) [0.000, -0.000, 0.000]
- Rotation: in RPY (degree) [0.000, -0.000, 0.000]
- Matrix:
  1.000  0.000  0.000  0.000
  0.000  1.000  0.000  1.000
  0.000  0.000  1.000  0.000
  0.000  0.000  0.000  1.000
```
### Results from rqt_console
![service_client](https://github.com/Sameer-Arjun-S/ROS2_beginner_tutorials/assets/112655999/bd503082-ef95-45cf-b41d-9a17cae380a8)
