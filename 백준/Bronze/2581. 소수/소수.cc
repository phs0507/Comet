#include <stdio.h>

int main(){
    
    int m, n;
    scanf("%d %d", &m, &n);
    
    int sum = 0, min = 0;

    // 2부터 n까지 소수를 확인
    for (int i = m; i <= n; i++) {
        int is_prime = 1;  // 소수라고 가정
        
        if (i < 2) continue;  // 2보다 작은 수는 소수가 아님
        
        for (int j = 2; j * j <= i; j++) {  // i가 소수인지 확인
            if (i % j == 0) {
                is_prime = 0;  // 소수가 아님
                break;
            }
        }
        
        if (is_prime) {
            sum += i;  // 소수라면 합에 추가
            if (min == 0) {
                min = i;  // 첫 번째 소수를 최솟값으로 설정
            }
        }
    }
    
    if (min != 0) {
        printf("%d\n%d", sum, min);  // 결과 출력
    } else {
        printf("-1");  // 소수가 없을 경우 -1 출력
    }

    return 0;
}