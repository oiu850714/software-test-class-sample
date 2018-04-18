#include "gtest/gtest.h"
#include "cal.h"
TEST(cal, add){
	EXPECT_EQ(cal('+', 2, 3), 5);
}

TEST(cal, sub){
}

TEST(cal, mul){
}

TEST(cal, div){
}

TEST(cal, unknown){
	EXPECT_ANY_THROW(cal('%', 0, 3));
}
