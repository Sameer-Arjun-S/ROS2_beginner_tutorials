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
```

### Running service client
```
ros2 run beginner_tutorials server_client <new_string_to_publish>
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

```
