#include <iostream>
#include "Array10.h"
using namespace std;

int main(){

	Array10 A;
	int tempArr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	A.setArray(tempArr);
	for(int i=0; i<MAX; i++)
		cout << A.get(i) << " ";
	cout << endl;

	A.reverse();
	for(int i=0; i<MAX; i++)
		cout << A.get(i) << " ";
	cout << endl;

	// 1 3 5 7 9 2 4 6 8 10 
	// 10 8 6 4 2 9 7 5 3 1

	return 0;
}
