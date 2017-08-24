#include "cat.h"

cat::cat():age(0),name(""){}

cat::cat(int n):age(n),name(""){}

cat::cat(string tname):age(0),name(tname){}

cat::cat(int n, string tname):age(n),name(tname){}

cat::~cat(){
	cout << "이름이 \"" << name << "\"인 cat이 사라졌습니다. 으앙 쥬금 ㅠㅠ" << endl;
}

void cat::print(){
	cout << "이름: " << name << ", 나이: " << age << endl;
}
