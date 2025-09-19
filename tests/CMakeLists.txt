# add the test executable target
add_executable(test_hello test-hello.cpp)
target_link_libraries(test_hello PUBLIC basic)
add_test(NAME test-hello COMMAND test_hello)

add_executable(test_version test-version.cpp)
target_link_libraries(test_version PUBLIC basic)
add_test(NAME test-version COMMAND test_version)
