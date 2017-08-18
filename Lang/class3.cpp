#include <iostream>
using namespace std;

inline int sum(int, int);

class testStatic {
private:
	static int static_n;
	int auto_n;
public:
	static void set_static(int);
	static int get_static();
	void set_auto(int);
	int get_auto();
};

// U should initiate it first.
int testStatic::static_n = 0;

int main()
{
	cout << sum(7, 13) << endl;
	// 20

	testStatic A, B;
	A.set_static(5);
	A.set_auto(3);
	cout << "A.static_n : " << A.get_static() << endl;
	cout << "A.auto_n : " << A.get_auto() << endl;
	// A.static_n : 5
	// A.auto_n : 3

	B.set_auto(-2);
	cout << "B.static_n : " << B.get_static() << endl;
	cout << "B.auto_n : " << B.get_auto() << endl;
	// B.static_n : 5
	// B.auto_n : -2

	// U can call function typed static without object
	testStatic::set_static(10);
	cout << "static_n : " << testStatic::get_static() << endl;
	// static_n : 10

	return 0;
}

int sum(int a, int b) { return a + b; }

void testStatic::set_static(int n) { static_n = n; }
int testStatic::get_static() { return static_n; }
void testStatic::set_auto(int n) { auto_n = n; }
int testStatic::get_auto() { return auto_n; }
