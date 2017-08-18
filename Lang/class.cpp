#include <iostream>
using namespace std;

class Pairs {
public:
	int n, m;
	int sum() { return n+m; }
	void print();
};

class Pairs2 {
private:
	int m, n;
public:
	void setM(int);
	void setN(int);
	int getM();
	int getN();
};

int main()
{
	Pairs A, B;
	
	A.n = 3;
	A.m = 4;

	B.m = 5;
	B.n = 6;

	int sumA, sumB;
	sumA = A.sum();
	sumB = B.sum();

	cout << "A.sum() : " << sumA << endl;
	cout << "B.sum() : " << sumB << endl;
	
	A.print();
	B.print();


	/*** Encapsulation ***/
	
	Pairs2 C;
	// C.m = 7; (x)
	// C.n = 8; (x)

	C.setM(7);
	C.setN(8);

	cout << "C.m: " << C.getM() << ", C.n: " << C.getN() << endl;
	// C.m: 7, C.n: 8 

	return 0;
}

void Pairs::print() { cout << "m: " << m << ", n: " << n << endl; }

void Pairs2::setM(int m1) { m = m1; }
void Pairs2::setN(int n1) { n = n1; }
int Pairs2::getM() { return m; }
int Pairs2::getN() { return n; }
