// boj.kr/2042
// http://kks227.blog.me/220791986409

#include <stdio.h>

long long arr[1<<21];
int sIdx=(1<<21)/2; // start index
// int sIdx = 1;

void update(int i, int val)
{
	i += sIdx;
	arr[i] = val;

	while(i) {
		i >>= 1;
		arr[i] = arr[i<<1] + arr[(i<<1)+1];
	}
}

// sum(L, R, 1, 0, sIdx-1)
// nodeNum : 현재 노드의 인덱스
// [L, R] : 우리가 구하고자 하는 구간
// [nodeL, nodeR] : seg[nodeNum]이 포한하는 구간 
long long sum(int L, int R, int nodeNum, int nodeL, int nodeR)
{
	int mid = (nodeL+nodeR)/2;

	if(R < nodeL || nodeR < L) return 0;
	if(L <= nodeL && nodeR <= R) return arr[nodeNum];
	return sum(L, R, nodeNum*2, nodeL, mid) + sum(L, R, nodeNum*2+1, mid+1, nodeR);
}

int main()
{
	int i, n, m, k;
	int s, e, query;
	scanf("%d%d%d", &n, &m, &k);

	// while(sIdx < n) sIdx <<= 1;

	for(i=1; i<=n; i++) { // (index 0 버리고 시작..) 
		long long num;
		scanf("%lld", &num);
		update(i, num);
	}

	query = m+k;
	while(query--) {
		int qr, a, b;
		scanf("%d%d%d", &qr, &a, &b);
		if(qr == 1) update(a, b);
		else printf("%lld\n", sum(a, b, 1, 0, sIdx-1));
	}
}
