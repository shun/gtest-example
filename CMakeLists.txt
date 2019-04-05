cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER clang++-7)
set(CMAKE_CXX_STANDARD 17)

project(cmake_example CXX)

find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing()

include_directories(
	./inc
)

add_executable(
	mytest
	./src/main.cpp
	./src/myint.cpp
)

add_executable(
	mygtest
	./src/myint.cpp
	./test/gtest_myint.cpp
)

target_link_libraries(
	mygtest
	GTest::GTest
	GTest::Main   # GTest::Mainをリンクすると自分でmain関数を書く必要がなくなる
)

gtest_add_tests(
	TARGET mygtest
)
