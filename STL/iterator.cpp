#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(9);
	v.push_back(17);

	vector<int>::iterator it;
	int sum=0;
	for(it=v.begin(); it!=v.end(); it++) {
		sum += *it;
		cout << *it << ' ';
	}
	cout << endl << sum << endl;
	// 4 9 17 
	// 30

	v.insert(v.begin()+1,  12);
	v.insert(v.begin()+3,  -3);
	v.insert(v.end(),  5);
	
	for(it=v.begin(); it!=v.end(); it++) 
		cout << *it << ' ';
	cout << endl;
	// 4 12 9 -3 17 5 

	v.erase(v.begin()+2);
	v.erase(v.end()-1);
	for(it=v.begin(); it!=v.end(); it++) 
		cout << *it << ' ';
	cout << endl;
	// 4 12 -3 17 

	vector<int>::const_iterator c_it;
	c_it = v.begin() + 1;
	// *c_it = 99; impossible. read only!!

	vector<int>::reverse_iterator r_it;
	for(r_it=v.rbegin(); r_it!=v.rend(); r_it++)
		cout << *r_it << ' ';
	cout << endl;
	// 17 -3 12 4

	cout << *(v.begin()+1) << ' ' << *(v.rbegin()+1) << endl;
	// 12 -3 (4 12 -3 17)

	vector<int>::const_reverse_iterator cr_it;
	cr_it = v.begin() + 1;
	// *cr_it = 99; impossible. read only!!

}
