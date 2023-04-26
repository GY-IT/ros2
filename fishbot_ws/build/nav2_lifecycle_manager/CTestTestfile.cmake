# CMake generated Testfile for 
# Source directory: /home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager
# Build directory: /home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/copyright.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_copyright/copyright.txt" "--command" "/opt/ros/galactic/bin/ament_copyright" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_copyright.cmake;46;ament_add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cppcheck.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cppcheck.xunit.xml" "--include_dirs" "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cpplint.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_cpplint/cpplint.txt" "--command" "/opt/ros/galactic/bin/ament_cpplint" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/flake8.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_flake8/flake8.txt" "--command" "/opt/ros/galactic/bin/ament_flake8" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/lint_cmake.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/pep257.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_pep257/pep257.txt" "--command" "/opt/ros/galactic/bin/ament_pep257" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/uncrustify.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/galactic/bin/ament_uncrustify" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/xmllint.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/home/ros2/ros2_learn/fishbot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;89;ament_package;/home/ros2/ros2_learn/fishbot_ws/src/navigation2/nav2_lifecycle_manager/CMakeLists.txt;0;")
subdirs("test")
