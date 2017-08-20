#include <iostream>
#include "rectangle.h"
using namespace std;

void rectangle::set(int a, int b, int c, int d) {
	if(a > c) { int tmp = a; a = c; c = tmp; } 
	if(b > d) { int tmp = b; b = d; d = tmp; } 
	P1.set(a, b);
	P2.set(c, d);
}

void rectangle::print() {
	cout << "Left  Up   (" << P1.getX() << ", " << P1.getY() << ")" << endl;
	cout << "Right Up   (" << P2.getX() << ", " << P1.getY() << ")" << endl;
	cout << "Left  Down (" << P1.getX() << ", " << P2.getY() << ")" << endl;
	cout << "Right Down (" << P2.getX() << ", " << P2.getY() << ")" << endl;
}

int rectangle::area() {
	return (P2.getX()-P1.getX()) * (P2.getY()-P1.getY());
}
