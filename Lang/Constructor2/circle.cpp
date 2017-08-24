#include <iostream>
#include "circle.h"
using namespace std;

circle::circle() : P(0, 0), r(1) {
	//P.set(0, 0);
}

circle::circle(int x1, int y1, int r1) : P(x1, y1), r(r1) {
	//P.set(x1, y1);
}

void circle::set(int x1, int y1, int r1) {
	P.set(x1, y1);
	r = r1;
}

void circle::print(){
	 cout << "Center : (" << P.getX() << ", " << P.getY() << ")" << endl;
}

double circle::area(){
	 return r*r*3.14;
}

