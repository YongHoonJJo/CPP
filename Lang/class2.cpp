#include <iostream>
using namespace std;

class MyClass {
public:
	void set(int);
	int get();
private:
	int n;
	void hidden(); // !!
};

#define MAX 10

class Array10 {
private:
	int arr[MAX];
	void swap(int&, int&); // !!
public:	
	void setArray(int *);
	void reverse();
	int get(int);
};

int main()
{
	MyClass A;
	A.set(5);
	cout << A.get() << endl;

	// A.hidden(); (x)

	Array10 B;
	int tempArr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	B.setArray(tempArr);
	for(int i=0; i<MAX; i++)
		cout << B.get(i) << ' ';
	cout << endl;
	// 1 3 5 7 9 2 4 6 8 10 

	B.reverse();
	for(int i=0; i<MAX; i++)
		cout << B.get(i) << ' ';
	cout << endl;
	// 10 8 6 4 2 9 7 5 3 1

	return 0;
}

void MyClass::set(int n1) { n = n1; }
int MyClass::get() { return n; }
void MyClass::hidden() { n = n*n; }

void Array10::setArray(int *tmp) {
	for(int i=0; i<MAX; i++)
		arr[i] = tmp[i];
}
void Array10::reverse() {
	for(int i=0; i<MAX/2; i++)
		swap(arr[i], arr[MAX-1-i]); // !!
}
int Array10::get(int idx) { return arr[idx]; }
void Array10::swap(int &a, int &b) { int t=a; a=b; b=t; }
