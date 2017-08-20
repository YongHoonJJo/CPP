#include <iostream>
#include "rectangle.h"
#include "circle.h"
using namespace std;

int main() 
{
	rectangle A;
	A.set(1, 4, 3, 7);
	A.print();
	cout << "Area : " << A.area() << endl;

	cout << "-------------------" << endl;

	circle B;
	B.set(2, 5, 2);
	B.print();
	cout << "Area : " << B.area() << endl;

	/*
	Left  Up   (1, 4)
	Right Up   (3, 4)
	Left  Down (1, 7)
	Right Down (3, 7)
	Area : 6
	-------------------
	Center: (2, 5)
	Area : 12.56
	*/
}	
