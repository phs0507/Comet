#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 대소 비교 함수 (퀵정렬 컴파일 오류...)
int cmp(const void* a, const void* b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;

    if (int_a > int_b) return 1;
    if (int_a < int_b) return -1;
    return 0;
}

// n개 요소 중 찾으려는 값 s를 이진 탐색
int search(int arr[], int n, int s) { 
    // 초기값 설정
    int mid, left = 0, right = n - 1;
    // 중간값 갱신하며 이동
    while (right >= left) {
        mid = (left + right) / 2;
        
        // 찾을 경우
        if (s == arr[mid]) return 1;
        
        // 찾으려는 값이 중간값보다 작을 경우 오른쪽 값 갱신
        // 그 반대시 왼쪽값 갱신
        if (s < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return 0;
}

int main(void) {
    int n, m, s;
    scanf("%d", &n);
    // 배열 n개의 정수값만큼의 메모리 동적 할당
    int* arr = (int*)malloc(sizeof(int) * n);
   
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // 퀵 정렬
    qsort(arr, n, sizeof(int), cmp);
 
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &s);
        printf("%d ", search(arr, n, s));
    }
    // 메모리 동적 할당 해제
    free(arr);
 
    return 0;
}