// boj.kr/11404
// http://kks227.blog.me/220797649276
#include <stdio.h>

int v, e;
long long g[101][101];

int main()
{
	int i, j, k, a, b, w;
	scanf("%d %d", &v, &e);
	
	for(i=1; i<=v; i++) {
		for(j=1; j<=v; j++)
			g[i][j] = (-1)^(1<<31);
		g[i][i] = 0; // i에서 i로 이동이 가능하단 뜻.
	}

	for(i=0; i<e; i++) {
		scanf("%d %d %d", &a, &b, &w);
		if(g[a][b] > w)
			g[a][b] = w;
	}

	// g[i][j] : i에서 j까지의 최단경로
	// i에서 j까지, k(1~n)번 정점만 사용할 때의 최단경로
	for(k=1; k<=v; k++) {
		for(i=1; i<=v; i++) {
			for(j=1; j<=v; j++) {
				if(g[i][j] > g[i][k]+g[k][j])	// i~j까지 갈 때, i~k, k~j를 가는 경로가 더 빠른경우..
					g[i][j] = g[i][k] + g[k][j];
			}
		}
	}

	for(i=1; i<=v; i++) {
		for(j=1; j<=v; j++)
			printf("%lld ", g[i][j]);
		puts("");
	}

	return 0;
}
