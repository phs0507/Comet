#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n,x;
	int arr[10001];
	scanf("%d %d", &n,&x);

	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0;i < n;i++) {
		if (x > arr[i]) printf("%d ", arr[i]);
	}

	return 0;
}