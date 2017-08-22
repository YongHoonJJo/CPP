#include <iostream>
using namespace std;

int sum(int a, int b) { return a+b; }

// double sum(int a, int b) { return (double)a+b; } // return 타입만 다른것은 허용되지 x

double sum(int a, double b) { return a+b; }

int sum(int a, int b, int c) { return a+b+c; }

int main() 
{
	cout << sum(1, 2) << endl;		// 3
	cout << sum(1, 10.1) << endl;	// 11.1
	cout << sum(1, 2, 3) << endl;	// 6
}
