#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n,v,count=0;
	int arr[200];
	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	
	scanf("%d", &v);

	for (int i = 0;i < n;i++) {
		if (v == arr[i]) count++;
	}

	printf("%d", count);

	return 0;
}