#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector< vector<int> > rank(n, vector<int>(3));

	// About BOJ 2336

	for(int i=0; i<3; i++) {
		for(int j=0; j<n; j++) {
			int k;
			cin >> k;
			rank[k-1][i] = j; // k번째 학생의 i번째 시험의 등수 j
		}
	}

	/* input
	10
	2 5 3 8 10 7 1 6 9 4
	1 2 3 4 5 6 7 8 9 10
	3 8 7 10 5 4 1 2 6 9
	*/

	for(int i=0; i<3; i++) {
		cout << i << " :";
		for(int j=0; j<n; j++) {
			cout << ' ' << rank[j][i];
		}
		cout << '\n';
	}
	cout << endl;

	/*
	0 : 6 0 2 9 1 7 5 3 8 4
	1 : 0 1 2 3 4 5 6 7 8 9
	2 : 6 7 0 5 4 8 2 1 9 3
	*/

	// 1번째 시험 등수 기준으로 정렬
	sort(rank.begin(), rank.end());
	
	for(int i=0; i<3; i++) {
		cout << i << " :";
		for(int j=0; j<n; j++) {
			cout << ' ' << rank[j][i];
		}
		cout << '\n';
	}

	/* output
	0 : 0 1 2 3 4 5 6 7 8 9
	1 : 1 4 2 7 9 6 0 5 8 3
	2 : 7 4 0 1 3 2 6 8 9 5
	*/
		
}		
