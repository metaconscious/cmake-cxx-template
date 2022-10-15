#include "util.h"
#include <gtest/gtest.h>

TEST(UtilTest, BasicAssertions)
{
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}
