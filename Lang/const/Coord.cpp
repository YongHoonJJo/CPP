#include "Coord.h"

Coord::Coord() : x(0),y(0),n(0) {}

Coord::Coord(int x1, int y1) : x(x1),y(y1),n(0) {}

void Coord::setX(int x1){ x = x1; }

void Coord::setY(int y1){ y = y1; }

// 멤버함수의 const : 이 함수는 멤버 변수를 수정하지 않는다는 의미!!
int Coord::getX() const{ return x; }

int Coord::getY() const{ return y; }

void Coord::print() const{ 
	cout << "(" << x << ", " << y << ")" << endl;
}

void Coord::testConst() {
	cout << "Const member can call just const member funciont" << endl;
}
