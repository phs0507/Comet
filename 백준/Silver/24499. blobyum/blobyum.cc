#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int w[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }
    
    int max_sum = 0, current_sum = 0;
    
    // 첫 k개의 합 계산
    for (int i = 0; i < k; i++) {
        current_sum += w[i];
    }
    max_sum = current_sum;
    
    // 슬라이딩 윈도우로 최대 합 찾기 (원형 배열 처리)
    for (int i = 0; i < n; i++) {
        current_sum = current_sum - w[i] + w[(i + k) % n]; // 원형 배열 적용
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%d\n", max_sum);
    return 0;
}