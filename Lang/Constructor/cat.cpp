#include "cat.h"

//cat::cat() { age = 0; name = ""; }
cat::cat() : age(0), name("") {}

cat::cat(int n) : age(n), name("") {}

cat::cat(string tname) : age(0), name(tname) {}

cat::cat(int n, string tname) : age(n), name(tname) {}


void cat::set(int n) { age = n; }

void cat::set(string tname) { name = tname; }

void cat::set(int n, string tname) { age = n; name = tname; }

void cat::print() {
	 cout << "이름: " << name << ", 나이: " << age << endl;
}
