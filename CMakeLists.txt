cmake_minimum_required(VERSION 3.5.0)
project(stream_iterator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main.out src/main.cpp)
add_subdirectory(src/iterator)

target_link_libraries(
                        main.out 
                        PUBLIC istream_iterator
                        PUBLIC ostream_iterator
                    )

