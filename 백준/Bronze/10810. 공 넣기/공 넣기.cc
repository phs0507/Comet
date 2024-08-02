#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	int n, m;
	// 0번 인덱스는 공이 x, 100번 바구니까지 존재하도록 101로 설정
	int arr[101] = { 0 };
	int a, b, c;
	scanf("%d %d", &n, &m);
	
	for (int i = 0;i < m;i++) {
		scanf("%d %d %d", &a, &b, &c);

		// a바구니부터 b바구니까지 c번 공을 넣음
		for (int j = a;j <= b;j++) {
			arr[j] = c;
		}
	}

	// 빈 바구니는 0으로 초기화 되어있으므로 0을 출력
	for (int k = 1;k <= n;k++) {
		printf("%d ", arr[k]);
	}

	return 0;

}