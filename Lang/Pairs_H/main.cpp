#include <iostream>
#include "Pairs.h"
using namespace std;

int main()
{
	Pairs A, B;

	A.setM(3);
	A.setN(10);
	B.setM(-7);
	B.setN(12);

	int sumA, sumB;
	sumA = A.sum();
	sumB = B.sum();

	cout << "Sum of A : " << sumA << endl;
	cout << "Sum of B : " << sumB << endl;
	// Sum of A : 13
	// Sum of B : 5

	A.printP();
	B.printP();
	// m : 3, n : 10
	// m : -7, n : 12
	

	/*** Coord ***/

	Coord P;
	P.set(-1, 2);
	cout << "P: (" << P.getX() << ", " << P.getY() << ")" << endl;
	// P: (-1, 2)

	Pairs Two;
	Two.setA(5, 3);
	Two.setB(0, 10);
	Two.printC();
	// A: (5, 3)
	// B: (0, 10)

}
