#include <stdio.h>
#include <stdlib.h>

// 좌표 구조체
typedef struct{
    int x;
    int y;
} coord;

// 퀵정렬을 위한 비교함수
int compare(const void *a, const void *b){
  
    coord A = *(coord *)a; 
    coord B = *(coord *)b;
    
    // 오름차순 정렬
    
    if (A.x > B.x) 
        return 1;
    
    // x좌표가 같을 시
    else if (A.x == B.x) 
    {
        // y좌표 비교
        if (A.y > B.y)
            return 1;
        else
            return -1; 
    }
    
    // A.x가 B.x보다 작을 시 -1
    return -1; 
}

int main(){
    
    int n, i;
    scanf("%d", &n);
    
    coord arr[n]; // 구조체형으로 배열을 선언한다.
    
    // n개의 점에 대해 반복
    for (int i = 0; i < n; i++){ 
        // 구조체 배열의 x,y좌표 각각 저장
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    // 퀵정렬
    qsort(arr, n, sizeof(coord), compare); 

    for (int i = 0; i < n; i++){
        printf("%d %d\n", arr[i].x, arr[i].y); 
    }
    
    return 0;
}
