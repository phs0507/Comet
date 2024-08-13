#include <stdio.h>
 
int main(void) {
    
    int n;
 
    while (1) {
        int count = 0;
        scanf("%d", &n);
        
        // 입력이 -1일 경우 종료
        if (n == -1){
            break;
        }
 
        for (int i = 1; i < n; i++) {
            // i가 n의 약수일 경우
            if (n % i == 0) {
                count+=i;
            }
        }
        
        if (count == n) {
            printf("%d = 1", n);
            for (int i = 2; i < n; i++) {
                if (n % i ==0)
                printf(" + %d", i);
            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", n);
 
    }
 
    return 0;
}