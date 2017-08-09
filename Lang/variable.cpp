#include <iostream>
using namespace std;

int main()
{
	int a=5;
	cout << "a = " << a << endl;

	int b(3), c(4); // Initializing a variable 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	for(int i=0; i<5; i++)
		cout << i << ' ';
	cout << endl;

	// TypeCasting
	double f = 5.5;
	int n = static_cast<int>(f); // int n = (int)f;
	cout << f << ' ' << n << endl;
	
}
