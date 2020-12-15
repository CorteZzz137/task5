#include "pch.h"
#include "..//task5/task5.h"

TEST(Test5, 1) {
	list<int> a = { 1, 2, 3, 2, 1, 4 };
	list<int> ans = { 1, 2, 3, 4 };
	unic(a);
	auto i1 = a.begin();
	auto i2 = ans.begin();
	for (; i1 != a.end() && i2 != ans.end(); i1++) {
		if ((*i1) != (*i2)) {
			EXPECT_FALSE(false);
		}
		i2++;
	}
	EXPECT_TRUE(true);
}