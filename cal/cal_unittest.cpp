#include "gtest/gtest.h"
#include "cal.h"
TEST(cal, add){
    EXPECT_EQ(cal('+', 2, 3), 5);
   EXPECT_EQ(cal('+', 0, 3), 3);
}
