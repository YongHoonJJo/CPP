#include <iostream>
#include "cat.h"
using namespace std;

int main(){

	cat A(3, "Pine");
	{
		cat B(5, "Odd");
	}
	cout << "프로그램이 종료됩니다." << endl;

	// 이름이 "Odd"인 cat이 사라졌습니다. 으앙 쥬금 ㅠㅠ
	// 프로그램이 종료됩니다.
	// 이름이 "Pine"인 cat이 사라졌습니다. 으앙 쥬금 ㅠㅠ

	return 0;
}
