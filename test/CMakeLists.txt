add_definitions(-DTEST)
add_executable(fistz_test ../src/main.cpp)
add_test(NAME MyTest COMMAND fistz_test)
