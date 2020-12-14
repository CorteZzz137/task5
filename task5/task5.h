#pragma once
#include <list>
#include <iostream>

using namespace std;

float sum(list<int>& a) {

	int sum = 0;
	for (auto i : a) {
		sum += i;
	}

	return static_cast<float>(sum) / static_cast<float>(a.size());

}
