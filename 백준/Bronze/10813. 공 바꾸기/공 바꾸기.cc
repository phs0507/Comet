#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	int n, m,temp;
	// 0번 인덱스는 공이 x, 100번 바구니까지 존재하도록 101로 설정
	int arr[101] = { 0 };
	int a, b;
	scanf("%d %d", &n, &m);
	
	for (int i = 0;i <= n;i++) {
		arr[i] = i;
	}

	for (int i = 0;i < m;i++) {
		scanf("%d %d", &a, &b);

		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int k = 1;k <= n;k++) {
		printf("%d ", arr[k]);
	}

	return 0;

}
