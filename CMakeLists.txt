cmake_minimum_required(VERSION 3.17)
project(DataStructures)

set(CMAKE_CXX_STANDARD 20)

add_library(Stack
        Stack/Stack.hpp)

target_include_directories(Stack PRIVATE Stack)
set_target_properties(Stack PROPERTIES LINKER_LANGUAGE CXX)
add_executable(TestST Stack/TestStack.cpp)
target_link_libraries(TestST PRIVATE Stack)
target_compile_options(TestST PUBLIC -Wall -Wextra -Wpedantic)

add_library(Queue
        Queue/Queue.hpp)

target_include_directories(Queue PRIVATE Queue)
set_target_properties(Queue PROPERTIES LINKER_LANGUAGE CXX)
add_executable(TestQueue Queue/TestQueue.cpp)
target_link_libraries(TestQueue PRIVATE Queue)
target_compile_options(TestQueue PUBLIC -Wall -Wextra -Wpedantic)