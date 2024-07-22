#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N;
	scanf("%d\n", &N);
	
	for (int i = 0;i < N/4; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}