# CMake generated Testfile for 
# Source directory: /home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test
# Build directory: /home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_execution_timer "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_execution_timer.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_execution_timer.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_execution_timer" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_execution_timer.gtest.xml")
set_tests_properties(test_execution_timer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_execution_timer" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;1;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_node_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_node_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_node_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_node_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_node_utils.gtest.xml")
set_tests_properties(test_node_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_node_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;3;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_service_client "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_service_client.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_service_client.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_service_client" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_service_client.gtest.xml")
set_tests_properties(test_service_client PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_service_client" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;9;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_string_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_string_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_string_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_string_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_string_utils.gtest.xml")
set_tests_properties(test_string_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_string_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;13;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_lifecycle_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_lifecycle_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_utils.gtest.xml")
set_tests_properties(test_lifecycle_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;17;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_actions "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_actions.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_actions.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_actions" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_actions.gtest.xml")
set_tests_properties(test_actions PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_actions" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;21;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_lifecycle_node "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_node.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_lifecycle_node.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_node" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_node.gtest.xml")
set_tests_properties(test_lifecycle_node PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_node" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;25;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_lifecycle_cli_node "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_cli_node.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_lifecycle_cli_node.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_cli_node" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_lifecycle_cli_node.gtest.xml")
set_tests_properties(test_lifecycle_cli_node PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_lifecycle_cli_node" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;29;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_geometry_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_geometry_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_geometry_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_geometry_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_geometry_utils.gtest.xml")
set_tests_properties(test_geometry_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_geometry_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;33;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_odometry_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_odometry_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_odometry_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_odometry_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_odometry_utils.gtest.xml")
set_tests_properties(test_odometry_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_odometry_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;37;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_robot_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_robot_utils.gtest.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/ament_cmake_gtest/test_robot_utils.txt" "--command" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_robot_utils" "--gtest_output=xml:/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_robot_utils.gtest.xml")
set_tests_properties(test_robot_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test/test_robot_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;41;ament_add_gtest;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_dump_params_default "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_default.xunit.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/launch_test/test_dump_params_default.txt" "--env" "TEST_EXECUTABLE=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/src/dump_params" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/test_dump_params/test_dump_params_default.test.py" "--junit-xml=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_default.xunit.xml" "--package-name=nav2_util")
set_tests_properties(test_dump_params_default PROPERTIES  TIMEOUT "10" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;48;add_launch_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_dump_params_yaml "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_yaml.xunit.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/launch_test/test_dump_params_yaml.txt" "--env" "TEST_EXECUTABLE=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/src/dump_params" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/test_dump_params/test_dump_params_yaml.test.py" "--junit-xml=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_yaml.xunit.xml" "--package-name=nav2_util")
set_tests_properties(test_dump_params_yaml PROPERTIES  TIMEOUT "10" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;56;add_launch_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_dump_params_md "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_md.xunit.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/launch_test/test_dump_params_md.txt" "--env" "TEST_EXECUTABLE=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/src/dump_params" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/test_dump_params/test_dump_params_md.test.py" "--junit-xml=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_md.xunit.xml" "--package-name=nav2_util")
set_tests_properties(test_dump_params_md PROPERTIES  TIMEOUT "10" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;64;add_launch_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
add_test(test_dump_params_multiple "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_multiple.xunit.xml" "--package-name" "nav2_util" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/launch_test/test_dump_params_multiple.txt" "--env" "TEST_EXECUTABLE=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/src/dump_params" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/test_dump_params/test_dump_params_multiple.test.py" "--junit-xml=/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test_results/nav2_util/test_dump_params_multiple.xunit.xml" "--package-name=nav2_util")
set_tests_properties(test_dump_params_multiple PROPERTIES  TIMEOUT "10" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/build/nav2_util/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;72;add_launch_test;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_util/test/CMakeLists.txt;0;")
subdirs("../gtest")
