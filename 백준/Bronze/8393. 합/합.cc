#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int count=0;
	scanf("%d", &n);

	for (int i = 0;i < n+1;i++) {
		count+=i;
	}
	printf("%d", count);

	return 0;
}