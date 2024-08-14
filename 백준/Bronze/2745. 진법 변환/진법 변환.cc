#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char n[10000];
    int B;
    int result = 0;

    scanf("%s %d", n, &B); 

    int len = strlen(n);  

    for (int i = 0; i < len; i++) {
        int digit;
        
        if (n[i] >= '0' && n[i] <= '9') {
            digit = n[i] - '0';  
        }
        else if (n[i] >= 'A' && n[i] <= 'Z') {
            digit = n[i] - 'A' + 10;
        }
        
        // 진법 변환후 계산
        result += digit * pow(B, len - 1 - i);  
    }

    printf("%d", result);

    return 0;
}