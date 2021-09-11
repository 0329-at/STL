cmake_minimum_required(VERSION 3.19)
project(STL)

set(CMAKE_CXX_STANDARD 11)

add_executable(STL
        "STL serial container/array container/array.cpp"
        "STL serial container/array container/Container access.cpp"
        "STL serial container/array container/Access a single element.cpp" "STL serial container/vector container/vector.cpp" "STL serial container/vector container/vector serial container.cpp" "STL serial container/deque container/deque.cpp")