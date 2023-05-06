cmake_minimum_required(VERSION 3.23)
project(Sheet_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Sheet_2
        L-GCD.cpp main.cpp K-Divisors.cpp J-PrimesFrom1toN.cpp I-Palindrome.cpp T-Shape2.cpp U-SomeSums.cpp V-PUM.cpp W-Shape3.cpp)
