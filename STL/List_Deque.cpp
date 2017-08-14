#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
	list<int> List;		// Double Linked List
	List.push_back(3);
	List.push_back(4);
	List.push_back(5);
	List.push_front(2);
	List.push_front(1);



	list<int>::iterator Lit;
	for(Lit=List.begin(); Lit!=List.end(); Lit++)
		cout << *Lit << ' ';
	cout << endl;
	// 1 2 3 4 5

	Lit--;
	Lit--;
	// Lit+3 (x)
	List.insert(Lit, 6);
	List.pop_back();
	List.pop_front();
	for(Lit=List.begin(); Lit!=List.end(); Lit++)
		cout << *Lit << ' ';
	cout << endl;
	// 2 3 6 4

	deque<int> dq;
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);
	dq.push_front(2);
	dq.push_front(1);

	deque<int>::iterator dit;
	for(dit=dq.begin(); dit!=dq.end(); dit++)
		cout << *dit << ' ';
	cout << endl;
	// 1 2 3 4 5

	dq.insert(dq.begin()+3, 6);
	dq.pop_back();
	dq.pop_front();

	for(int i=0; i<dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl;
	// 2 3 6 4

	return 0;
}
