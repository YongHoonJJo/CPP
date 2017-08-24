// boj.kr/12015
// http://kks227.blog.me/220791986409

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct P { int x, i; };

int segMax[1<<21];
int sIdx=(1<<21)/2;

void update(int i, int val)
{
	i+=sIdx;
	segMax[i] = val;

	while(i != 1) {
		i >>= 1;
		segMax[i] = segMax[i*2]>segMax[i*2+1] ? segMax[i*2] : segMax[i*2+1];
	}
}

int Max(int L, int R, int nodeN, int nodeL, int nodeR)
{
	int a, b, mid=(nodeL+nodeR)/2;
	if(R < nodeL || nodeR < L) return 0;
	if(L <= nodeL && nodeR <= R) return segMax[nodeN];
	a = Max(L, R, nodeN*2, nodeL, mid);
	b = Max(L, R, nodeN*2+1, mid+1, nodeR);
	return a > b ? a : b;
}

bool cmp(P a, P b)
{
	return a.x == b.x ? a.i > b.i : a.x < b.x;
}

int main()
{
	int i, n, k;
	scanf("%d", &n);

	vector<P> v;
	for(i=0; i<n; i++) {
		scanf("%d", &k);
		v.push_back((P){k, i} );
	}

	// v[i].x 에 대해 오름차순 정렬
	// 값이 같다면 큰 인덱스부터..!!
	sort(v.begin(), v.end(), cmp);

	// 가장 작은 x 값부터 순회
	// (정렬전) v[i].x 인 i에 대해 구간 [0, i]에 
	// 지금까지 존재하는 LIS 길이+1 == x로 끝나는 LIS 길이
	for(i=0; i<n; i++) {
		int idx = v[i].i;
		int big = Max(0, idx, 1, 0, sIdx-1);
		update(idx, big+1);
	}
	printf("%d\n", segMax[1]);
}
