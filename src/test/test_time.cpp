#include <stdint.h>
#include <gtest/gtest.h>
#include "dlib/time.h"

TEST(dmTime, Sleep)
{
    dmTime::Sleep(1);
}

TEST(dmTime, GetTime)
{
    uint64_t start = dmTime::GetTime();
    dmTime::Sleep(100000);
    uint64_t end = dmTime::GetTime();
    ASSERT_NEAR(100000, end-start, 2000);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

