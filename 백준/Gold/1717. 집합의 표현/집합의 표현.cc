#define _CRT_SECURE_NO_WARNINGS
#define MAX_VERTICES 1000000
#include <stdio.h>
#include <stdlib.h>

int parent[MAX_VERTICES+1];

// 집합을 자기자신을 가리키도록 초기화
void set_init(int n) {

	for (int i = 1;i <= n;i++)
		parent[i] = i;
}

// 조상 찾기 함수(재귀 호출)
int find(int curr) {
	if (parent[curr] == curr)
		return curr;

	return parent[curr]= find(parent[curr]);
}

// 조상이 다르면 합치는 함수
void set_union(int a, int b) {
	int root1 = find(a);
	int root2 = find(b);
	if (root1 != root2) {
		parent[root1] = root2;
	}
}

int main() {

	int n, m, set, a, b;
	scanf("%d %d", &n, &m);

	// n개 부모 집합을 -1로 초기화
	set_init(n);

	for (int i = 0;i < m;i++) {
		scanf("%d %d %d", &set, &a, &b);

		// 0이면 합집합(유니온-파인드 이용)
		if (set == 0) {
			set_union(a, b);
		}

		// 1이면 집합 중복 검사
		else if (set == 1) {
			int parentA = find(a);
			int parentB = find(b);

			// A와 B의 집합이 같으면 YES 아니면 NO 출력
			if (parentA == parentB) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}

	return 0;
}