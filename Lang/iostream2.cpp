#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "input string including whitespace: ";
	getline(cin, str);
	cout << str << endl;
	cout << "str.length() : " << str.length() << endl;
	cout << "str.at(2) : " << str.at(2) << endl;
	
	
	/*** get(), peek(), putback(), ignore() ***/

	char ch;
	/*
	cout << "Input character: ";
	ch = cin.get(); // read from buffer
	cout << ch << endl;

	cout << "Input character: ";
	cin >> ch;
	cout << ch << endl;
	*/

	int n;
	/*
	cout << "input word or number: ";
	ch = cin.peek();	// read from buffer
	if('0' <= ch && ch <= '9') {
		cin >> n;
		cout << "Your input is a number " << n << endl;
	}
	else {
		cin >> str;
		cout << "You input a string " << str << endl;
	}
	*/

	/*
	cin.putback('1');
	cout << "input a num: ";
	cin >> n;
	cout << n << endl;
	*/

	cout << "input word or number: ";
	ch = cin.get();
	cin.putback(ch);
	if('0' <= ch && ch <= '9') {
		cin >> n;
		cout << "Your input is a number " << n << endl;
	}
	else {
		cin >> str;
		cout << "You input a string " << str << endl;
	}

	return 0;
}
