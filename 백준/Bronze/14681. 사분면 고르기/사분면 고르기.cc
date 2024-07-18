#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int x, y;
    scanf("%d\n", &x);
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("1");
    else if (x > 0 && y < 0)
        printf("4");
    else if (x < 0 && y < 0)
        printf("3");
    else
        printf("2");

    return 0;
}