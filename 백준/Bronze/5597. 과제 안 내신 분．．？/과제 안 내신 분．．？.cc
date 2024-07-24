#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n[30] = { 0 };

	for (int i = 0;i < 28;i++) {
		int a;
		scanf("%d", &a);
		n[a-1]++;
	}

	for (int i = 0; i < 30;i++) {
		if (!n[i]) printf("%d\n", i+1);
	}

	return 0;
}