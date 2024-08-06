#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	int arr[1001],remain[1001];
	int result = 0;
	
	for (int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		remain[i] = arr[i] % 42;
	}

	for (int i = 0;i < 10;i++) {
		int count = 0;
		for (int j = i + 1;j < 10;j++) {
			if (remain[i] == remain[j]) count++;
		}
		if (!count) result++;
	}

	printf("%d", result);

	return 0;

}
