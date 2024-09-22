#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// n개의 좌표를 압축하려고 함 (X1, X2, ..., Xn)
// Xi 압축 결과 X'i는 Xi > Xj를 만족시키는 서로 다른 좌표 Xj의 개수와 같아야함

// 값(x)를 오름차순 정렬 -> 가장 작은 수부터 시작, 0부터 숫자 설정
// 오름차순 정렬된 숫자를 원래대로 되돌림
// 첫번째 숫자부터 시작해 압축된 숫자 출력

typedef struct Coord {
    // 입력값, 입력 순서, 압축된 값을 저장한 구조체
	int x;		
	int loc;
	int compress;
} Coord;
 
int flag;
 
int compare(const void* a, const void* b) {
	Coord A = *(Coord*)a;
	Coord B = *(Coord*)b;
	// 값 정렬
	if (!flag) {
		if (A.x > B.x)
			return 1;
		else if (A.x < B.x)
			return -1;
		else
			return 0;
	}
	else {	// 위치 번호 정렬
		if (A.loc > B.loc)
			return 1;
		else if (A.loc < B.loc)
			return -1;
		else
			return 0;
	}
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    // N개의 구조체 배열 동적 할당
    Coord* coord = (Coord*)calloc(N, sizeof(Coord));
    // 입력 값, 입력 순서 저장
    for (int i = 0; i < N; i++) {
        scanf("%d", &coord[i].x);
        coord[i].loc = i;
    }

    // 값(x)을 기준으로 정렬
    qsort(coord, N, sizeof(Coord), compare);

    // 숫자 압축
    coord[0].compress = 0; // 첫 번째 값의 압축값은 0
    // 1부터 반복
    for (int i = 1; i < N; i++) {
        // 값이 같으면 압축
        if (coord[i].x == coord[i - 1].x) {
            coord[i].compress = coord[i - 1].compress;
        } 
        // 아닐 경우 압축값 증가
        else {
            coord[i].compress = coord[i - 1].compress + 1;
        }
    }
    flag=1;
    // 기존 순서로 돌리기 위해 위치를 기준으로 정렬
    qsort(coord, N, sizeof(Coord), compare);

    for (int i = 0; i < N; i++) {
        printf("%d ", coord[i].compress);
    }

    // 동적 할당 메모리 해제
    free(coord);
    return 0;
}
