#include "Peach.h"

// 멤버함수 아니므로 Peach:: 가 없다.
void setWeight(Peach &pch, int n) {
	pch.weight = n;
}

int Peach::getWeight() { return weight; }
