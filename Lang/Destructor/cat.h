#include <iostream>
#include <string>
using namespace std;

class cat{
private:
	int age;
	string name;
public:
	cat();
	cat(int);
	cat(string);
	cat(int, string);
	~cat();				// destructor
	void print();
};
