// boj.kr/6086
// http://kks227.blog.me/220804885235

#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAXV	52
#define INF	0x3f3f3f3f

inline int CtoI(char c)
{
	if(c <= 'Z') return c-'A';
	return c-'a'+26;
}

int main()
{
	int n;
	int c[MAXV][MAXV] = {0}; // c[i][j] : i에서 j로 가는 간선의 용량
	int f[MAXV][MAXV] = {0}; // f[i][j] : i에서 j로 가는 간선의 유량
	vector<int> g[MAXV];

	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		char u, v;
		int w;
		scanf(" %c %c %d", &u, &v, &w);
		u = CtoI(u); v = CtoI(v);
		c[u][v] += w;
		g[u].push_back(v);
		g[v].push_back(u); // For 역방향 간선
	}

	// total : 총 유량, S : 소스, E : 싱크
	int total=0, S=CtoI('A'), E=CtoI('Z');
	while(1) { // 증가경로를 못 찾을 때까지 루프
		// 증가경로를 BFS로 찾음 : Edmonds-Karp
		//  DFS로 찾는 경우 : Ford-Fulkerson
		int prev[MAXV];
		fill(prev, prev+MAXV, -1);
		
		queue<int> q;
		q.push(S);
		while(!q.empty()) {
			int cur = q.front(); q.pop();
			for(int i=0; i<g[cur].size(); i++) {
				int next = g[cur][i];
				// c[i][j]-f[i][j] > 0 : i에서 j로 유량을 흘릴 여유가 되는지?
				// prev[next] == -1 : next정점을 아직 방문하지 않았는가?
				if(c[cur][next]-f[cur][next] > 0 && prev[next] == -1) {
					q.push(next);
					prev[next] = cur;
					if(next == E) break;
				}
			}		
		}
		// 싱크로 가는 경로가 없는 경우 루프 탈출
		if(prev[E] == -1) break;

		// 경로상에서 허용치가 낮은곳을 찾음
		int flow = INF;
		for(int i=E; i!=S; i=prev[i])
			flow = min(flow, c[prev[i]][i]-f[prev[i]][i]);

		// 찾은 flow만큼 해당 경로에 유량을 흘려줌
		for(int i=E; i!=S; i=prev[i]) {
			f[prev[i]][i] += flow;
			f[i][prev[i]] -= flow;
		}			
		// 총 유량 값 증가
		total += flow;
	}
	printf("%d\n", total);
}
