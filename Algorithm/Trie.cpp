// boj.kr/5052
// http://kks227.blog.me/220938122295

#include <cstdio>
#define GO_MAX	10		// 트라이 노드마다 포인터 개수

struct Trie {
	Trie *go[GO_MAX];	// 다음 노드를 가리키는 포인터 배열
	bool output;		// 이 노드에서 끝나는 전화번호가 있는가?
	bool goExist;		// 이 노드의 끝나는 자식이 있는가?

	Trie() { // 생성자
		for(int i=0; i<GO_MAX; i++)
			go[i] = NULL;
		output = goExist = false;
	}

	~Trie() { // 소멸자
		for(int i=0; i<GO_MAX; i++)
			if(go[i]) delete go[i];
	}
	
	// 문자열 키를 현재 노드부터 삽입
	void insert(const char *key) {
		// 문자열이 끝남
		if(*key == 0) output = true;
		else { // 아닌경우
			int next = *key - '0';
			// 해당 자식노드가 없는 경우 새로 동적할당.
			if(!go[next]) go[next] = new Trie();
			goExist = true;
			// 자식 노드에 이어서 삽입
			go[next]->insert(key+1);
		}
	}

	// 이 노드가 일관성이 있는가?
	bool consistent() {
		// 자식도 있으면서, 여기서 끝나는 전화번호도 있으면 일관성 없음.
		if(goExist && output) return false;
		
		// 자식들중 하나라도 일관성이 없으면 이 노드도 일관성이 없음.
		for(int i=0; i<GO_MAX; i++)
			if(go[i] && !go[i]->consistent()) 
				return false;
		return true;
	}
};

int main()
{
	int tc;
	scanf("%d", &tc);
	
	while(tc--) {
		int n;
		scanf("%d", &n);
		Trie *root = new Trie(); // 루트노드 만들기
		for(int i=0; i<n; i++) {
			char TEL[11];
			scanf("%s", TEL);
			root->insert(TEL);
		}
		root->consistent() ? puts("YES") : puts("NO");
		delete root;
	}
}
