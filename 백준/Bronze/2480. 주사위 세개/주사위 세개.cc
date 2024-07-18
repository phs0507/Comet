#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int A, B, C;
    int MAX;
    int Same;
    scanf("%d %d %d", &A, &B, &C);

    // 다 같은 경우
    if (A == B && B == C) {
        printf("%d", 10000 + (A * 1000));
    }
    // 두 개가 같은 경우
    else if (A == B || A == C || B == C) {
        if (A == B || A == C)
            Same = A;
        else
            Same = B;
        printf("%d", 1000 + (Same * 100));
    }
    // 모두 다른 경우
    else {
        if (A >= B && A >= C)
            MAX = A;
        else if (B >= A && B >= C)
            MAX = B;
        else
            MAX = C;
        printf("%d", MAX * 100);
    }
    return 0;
}