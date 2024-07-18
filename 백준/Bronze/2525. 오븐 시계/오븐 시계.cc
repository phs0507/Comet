#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int A, B,C;
    scanf("%d %d\n", &A,&B);
    scanf("%d", &C);

    int H = (B + C) / 60;
    int M = (B + C) % 60;
    if (A + H >= 24 && B + C >= 60)
        printf("%d %d", A + H - 24, M);
    else if (!(A + H >= 24) && B + C >= 60)
        printf("%d %d", A + H, M);
    else if (!(A+H>=24)&&!(B+C>=60))
        printf("%d %d", A, B + C);

    return 0;
}