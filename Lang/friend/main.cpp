#include <iostream>
#include "friendEx.h"
#include "Peach.h"
using namespace std;

int main() 
{
	// #include "friendEx.h"
	Apple apple1;
	Box box1(40);
	box1.setAppleWeight(apple1,5);

	cout << apple1.getWeight() << endl; // 5
	cout << box1.getVolume() << endl;   // 40


	// #include "Peach.h"
	Peach peach1;
	setWeight(peach1, 10);
	cout << peach1.getWeight() << endl; // 10
}
