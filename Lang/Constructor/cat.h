#include <iostream>
#include <string>
using namespace std;

class cat {
private:
	int age;
	string name;
public:
	cat(); // Default Constructor
	cat(int);
	cat(string);
	cat(int, string); // Constructor Overloading
	void set(int);
	void set(string);
	void set(int, string);
	void print();
};
