cmake_minimum_required(VERSION 3.13)

find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

# 1st option simple one file
#add_executable(myExecutable mainTest.cpp)
#target_link_libraries(myExecutable ${GTEST_LIBRARIES} pthread)

# 2nd option multfiles
add_library(sumLibrary STATIC LibraryCode.cpp)

add_executable(mainApp main.cpp)
target_link_libraries(mainApp sumLibrary)

add_executable(testRunner test.cpp)
target_link_libraries(testRunner sumLibrary ${GTEST_LIBRARIES} pthread)
