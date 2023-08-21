#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(TestSuitSample, TestNameSample){
    int s = sum(2, 3); // Try change number, cmake .., make, ./testRunner
    ASSERT_EQ(5, s);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}