#include <stdio.h>

int main() {
	
    int n, i, dot=3, inc=2;
	scanf("%d", &n);

	for (i = 1; i <n; i++) {
		dot += inc;
        inc *= 2;
	}
	
	printf("%d", dot * dot);

	return 0;
}