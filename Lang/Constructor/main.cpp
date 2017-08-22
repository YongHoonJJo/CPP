#include <iostream>
#include "cat.h"
using namespace std;

int main(){

	cat A;
	A.print(); // 이름: , 나이: 0
	A.set(3, "Pine");
	A.print(); // 이름: Pine, 나이: 3
	A.set(5);
	A.print(); // 이름: Pine, 나이: 5
	A.set("Odd");
	A.print(); // 이름: Odd, 나이: 5


	cat B(5);
	B.print(); // 이름: , 나이: 5

	cat C("Hoon");
	C.print(); // 이름: Hoon, 나이: 0

	cat D(10, "JJo");
	D.print(); // 이름: JJo, 나이: 10


	/*** explicit constructor call ***/
	// return temporary object..!!

	cat E = cat("Happy");
	E.print(); // 이름: Happy, 나이: 0

	E = cat();
	E.print(); // 이름: , 나이: 0

	E = cat(15, "YH");	
	E.print(); // 이름: YH, 나이: 15

	/*** copy constructor ***/

	cat F(E);
	F.print(); // 이름: YH, 나이: 15

	return 0;
}
