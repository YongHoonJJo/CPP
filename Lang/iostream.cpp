#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "input a number: ";
	int n;
	cin >> n;

	cout << "Your input : " << n << endl;
	
	// cin, cout, endl are Object and exist in std.

	cout << "input two number: ";
	int a, b;
	cin >> a >> b;
	cout << "Your first number: " << a << endl;
	cout << "Your second number: " << b << endl;

	double f;
	cout << "input a decimal: ";
	cin >> f;
	cout << "Your input: " << f << endl;
	// in : 3.14 
	// out : 3.14

	cout << "input a decimal: ";
	cin >> f;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout << "Your input: " << f << endl;
	// in : 3.14
	// out : 3.140


	/*** <string> ***/
	string str1, str2, str3;
	cout << "input two words: ";
	cin >> str1 >> str2;
	str3 = str1 + str2;
	cout << "mixed word is " << str3 << endl;
	cout << "str3[1] : " << str3[1] << endl;

	str1 = "Power";
	str2 = "Kim";
	str3 = str1 + str2;
	cout << "mixed word is " << str3 << endl;
	cout << "str3[1] : " << str3[1] << endl;

	// string is a Object and exists in std too.
}
