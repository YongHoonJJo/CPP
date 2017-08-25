#include <iostream>
#include "Coord.h"
using namespace std;

const Coord add(const Coord, const Coord);
// Coord add(const Coord, const Coord);

void func1(Coord A);
void func2(const Coord A);

int main(){

	Coord A(2, 3);
	Coord B(-1, 0);
	A.print();				// (2, 3)
	B.print();				// (-1, 0)
	(add(A, B)).print(); 	// (1, 3)
	// (add(A, B)).setX(7);
	// add()의 return 형에 const없으면 가능

	func1(A);				// (2, 3)	

	/*** const reference  ***/

	int n = 10;
	const int &r = n;
	n = 6;
	// r = 7; Error!!

	return 0;
}


void func1(Coord A) {
	A.print(); // ok
}

// const형 객체는 const형 멤버함수만 호출가능
void func2(const Coord A) {
	cout << A.n << endl;
	// A.n = 10 : Error
	// A.testConst(); : Error
}

const Coord add(const Coord P, const Coord Q){
	int x1 = P.getX() + Q.getX();
	int y1 = P.getY() + Q.getY();
	//Coord temp(x1, y1);
	//return temp;
	return Coord(x1, y1);
}
