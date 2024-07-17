#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char N[11];
    int length;
    int N1, N2;
    scanf("%s", N);

    length = strlen(N);

    if (length == 1) {
        printf("NO");
    }
    else {
        for (int i = 0; i < length - 1; i++) {
            N1 = 1;
            N2 = 1;
            for (int j = 0; j <= i; j++) {
                N1 *= N[j] - '0';
            }
            for (int j = i + 1; j < length; j++) {
                N2 *= N[j] - '0';
            }
            if (N1 == N2) {
                printf("YES");
                return 0;
            }
        }
        printf("NO");
    }
    return 0;
}