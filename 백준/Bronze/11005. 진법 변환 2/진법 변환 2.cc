#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, B;
    char ans[101];
    scanf("%d %d", &n, &B);
    int i = 0;
    
    while (n > 0) {
        int cal = n % B;
        if (cal >= 10) {
            ans[i] = cal + 55;
        } else {
            ans[i] = cal + '0';
        }
        i++;
        n /= B;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", ans[j]);
    } 
    
    return 0;
    }