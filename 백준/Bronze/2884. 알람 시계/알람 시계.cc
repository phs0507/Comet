#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int H, M;
    scanf("%d %d", &H,&M);

    // H가 1 이상, M이 45 이상인 경우 M-45
    // H가 1 이상, M이 45 미만인 경우 M+60-45, H-1
    // H가 0, M 45 이상인경우 M-45
    // H가 0, M 45 미만인경우 H+23 M+60-45
    if (H >= 1 && M >= 45)
        printf("%d %d", H, M - 45);
    else if (H >= 1 && !(M >= 45))
        printf("%d %d", H - 1, M + 15);
    else if (!(H >= 1) && M >= 45)
        printf("%d %d", H, M - 45);
    else if (!(H >= 1) && !(M >= 45))
        printf("%d %d", H + 23, M + 15);

    return 0;
}