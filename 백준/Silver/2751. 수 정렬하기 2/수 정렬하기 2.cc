#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num[1000000];
// 퀵정렬 비교함수
int compare(const void *a, const void *b){
    
    int num1= *(int *)a;
    int num2= *(int *)b;
    
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i < n ; i++){
        scanf("%d",&num[i]);
    }
    // 정렬할 배열, 요소 개수, 요소 크기, 비교함수수
    qsort(num,n,sizeof(int),compare);
    
    for (int j = 0; j < n; j++) {
        printf("%d\n", num[j]);
    }
    return 0;
}