#include "friendEx.h"

Box::Box(int v) : volume(v) {}

// friend 선언으로 Box의 멤버함수에서 Apple의 private멤버에 접근 가능.
void Box::setAppleWeight(Apple &app, int n) {
	app.weight = n; // !!
}

int Box::getVolume() { return volume; }

int Apple::getWeight() { return weight; }

