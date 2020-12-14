#include "pch.h"
#include "..//task5/task5.h"

TEST(Test5, 1) {
	EXPECT_EQ(2.f, sum(list<int>{ 1, 2, 3 }));
}