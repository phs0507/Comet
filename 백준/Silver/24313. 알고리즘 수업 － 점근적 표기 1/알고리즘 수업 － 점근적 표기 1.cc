#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a1, a0, c, n0;

	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);

	// 일반 빅오 표기법에서 a0가 음수일 경우 주어진 문제의 조건을 만족 X
	// a0가 음수일 경우 a1는 c보다 작거나 같아야 함
	// 따라서 a1<=c라는 조건을 추가
	if (a1 * n0 + a0 <= c * n0 && a1 <= c) printf("1");
	else printf("0");

	return 0;
}