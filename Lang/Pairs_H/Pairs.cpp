#include <iostream>
#include "Pairs.h"
using namespace std;

void Pairs::setM(int m1) { m = m1; }

void Pairs::setN(int n1) { n = n1; }

int Pairs::getM() { return m; }

int Pairs::getN() { return n; }

int Pairs::sum() { return n+m; }

void Pairs::setA(int x1, int y1){
	 A.setX(x1);
	 A.setY(y1); 
}

void Pairs::setB(int x1, int y1){
	 B.setX(x1);
	 B.setY(y1); 
}

void Pairs::printP() {
	cout << "m : " << m << ", n : " << n << endl;
}
void Pairs::printC() {
	cout << "A: (" <<A.getX() << ", " <<A.getY() << ")" << endl;
	cout << "B: (" <<B.getX() << ", " <<B.getY() << ")" << endl;
}
