#include <gtest/gtest.h>
#include "head.h"

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
TEST(StringTest, SpaceTest)
{
string str1 = "   ";
string str2 = "   ";
EXPECT_EQ(str1, str2);
}
EXPECT_STREQ
