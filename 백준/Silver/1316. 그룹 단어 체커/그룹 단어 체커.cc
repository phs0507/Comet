#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    // 단어 개수 n, 그룹 단어와 체크 카운트 선언
    int n, group, count = 0;
    // 반복문에 사용될 변수 선언
    int i,j,k;
    // 최대 100글자 단어
    char word[100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%s", &word);
        // 그룹 단어일경우 1, 아니면 0 초기에 1로 설정
        group = 1;
        
        for(j = 0; j < strlen(word); j++) {
            for (k = 0; k < j - 1; k++) {
                // 그룹이 아닐 경우 0, 루프 빠져나옴
                if (word[j] == word[k] && word[j] != word[j - 1]) {
                    group = 0;
                    break;
                }
            }
            // 그룹 단어가 아니면 종료
            if (group == 0) {
                break;
            }
        }
        // 그룹 단어일 경우 카운트 +1
        if (group == 1) {
            count++;
        }
    }
    
    // 합산된 카운트 출력
    printf("%d", count);
    
    return 0;
}