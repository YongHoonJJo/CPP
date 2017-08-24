#include <iostream>
#include "circle.h"
using namespace std;

int main(){

	circle C1;
	circle C2(2, 3, 2);
	C1.print();
	cout << "Area: " << C1.area() << endl;
	C2.print();
	cout << "Area: " << C2.area() << endl;

	// Center : (0, 0)
	// Area: 3.14
	// Center : (2, 3)
	// Area: 12.56

	return 0;
}
