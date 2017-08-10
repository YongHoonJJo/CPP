#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int cap = 0;

	for(int i=0; i<200; i++) {
		v.push_back(i);
		if(cap != v.capacity()) {
			cap = v.capacity();
			cout << "capacity is changed. size is "
				<< v.size() << ", and capacity is " 
				<< v.capacity() << endl;
		}
	}
	cout << endl;
	/*
		capacity is changed. size is 1, and capacity is 1
		capacity is changed. size is 2, and capacity is 2
		capacity is changed. size is 3, and capacity is 4
		capacity is changed. size is 5, and capacity is 8
		capacity is changed. size is 9, and capacity is 16
		capacity is changed. size is 17, and capacity is 32
		capacity is changed. size is 33, and capacity is 64
		capacity is changed. size is 65, and capacity is 128
		capacity is changed. size is 129, and capacity is 256
	*/

	vector<int> v2;
	v2.reserve(100);
	cap = v2.capacity();

	for(int i=0; i<200; i++) {
		v2.push_back(i);
		if(cap != v2.capacity()) {
			cap = v2.capacity();
			cout << "capacity is changed. size is "
				<< v2.size() << ", and capacity is " 
				<< v2.capacity() << endl;
		}
	}
	// capacity is changed. size is 101, and capacity is 200

	vector<int> v3;
	for(int i=0; i<100; i++)
		v3.push_back(i);
	cout << "size is " << v3.size() << ", and capacity is " << v3.capacity() << endl;
	//size is 100, and capacity is 128

	v3.shrink_to_fit();
	cout << "size is " << v3.size() << ", and capacity is " << v3.capacity() << endl;
	//size is 100, and capacity is 100

	vector<int> v4(5);
	for(int i=0; i<v4.size(); i++)
		cout << v4[i] << ' ';
	cout << endl;
	cout << "size is " << v4.size() << ", and capacity is " << v4.capacity() << endl;
	//0 0 0 0 0 
	//size is 5, and capacity is 5

	vector<int> v5(5, 2);
	for(int i=0; i<v5.size(); i++)
		cout << v5[i] << ' ';
	cout << endl;
	cout << "size is " << v5.size() << ", and capacity is " << v5.capacity() << endl;
	//2 2 2 2 2 
	//size is 5, and capacity is 5
	
}
