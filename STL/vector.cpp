#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(12);
	v.push_back(5);
	v.push_back(96);

	for(int i=0; i<v.size(); i++)
		cout << v.at(i) << ' ';		
	cout << endl;	
	// Output : 12 5 96
	// v.at(i) == v[i]

	v.pop_back();	// Delette last element.
	v[1] = 21;		
	for(int i=0; i<v.size(); i++)
		cout << v.at(i) << ' ';		
	cout << endl;	
	// Output : 12 21

	if(v.empty()) cout << "Empty!" << endl;
	else cout << "Not empty!" << endl;
	cout << "Vector size : " << v.size() << endl;
	cout << "Vector capacity : " << v.capacity() << endl;
	// Not empty!
	// Vector size : 2
	// Vector capacity : 4

	v.clear();
	cout << endl << "After v.clear()" << endl;
	if(v.empty()) cout << "Empty!" << endl;
	else cout << "Not empty!" << endl;
	cout << "Vector size : " << v.size() << endl;
	cout << "Vector capacity : " << v.capacity() << endl;
	//	After v.clear()
	//	Empty!
	//	Vector size : 0
	//	Vector capacity : 4

	v.push_back(12);
	v.push_back(5);
	v.push_back(1);
	v.push_back(96);
	v.push_back(100);
	cout << "v[0] : " << v.front() << endl;
	cout << "v[v.size()-1] : " << v.back() << endl;
	cout << "Vector capacity : " << v.capacity() << endl;
	// v[0] : 12
	// v[v.size()-1] : 100
	//	Vector capacity : 8 
}
