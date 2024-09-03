#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

	// 체스판에 입력할 색깔의 배열
	char arr[50][50];
	// 다시 칠해야하는 칸의 최솟값 count (비교를 위해 큰값으로 설정)
	int n, m, count=10000;
	scanf("%d %d", &n, &m);
	
	// 둘째 줄부터 N개의 줄에 각 행의 상태를 입력
	for (int i = 0;i < n;i++) {
		scanf("%s", arr[i]);
	}

	// 첫째칸이 W,B가 되어야 할 때 따로 계산하기 위한 변수 (다시 칠하는 칸의 수) 
	int temp1 = 0, temp2 = 0;

	// x,y좌표의 합에 따라 그 좌표의 색을 알 수 있음
	// W로 시작하는 경우 짝수는 W, 홀수는 B
	// B로 시작하는 경우 짝수는 B, 홀수는 W 
	
	// 맨 왼쪽 위 좌표를 (0,0)이라 할때, 자를 수 있는 마지막 보드의 맨 왼쪽 위
	// 좌표는 (n-7,m-7)임 따라서 자를 수 있는 보드의 수만큼 반복 
	for (int x = 0;x < n-7;x++) {
		for (int y = 0;y < m - 7;y++) {

			// 첫째 칸이 W인 경우 (8x8 보드에 대해 반복)
			for (int i = x;i < x + 8;i++) {
				for (int j = y;j < y + 8;j++) {
			
					// 현재 좌표 (i-x, j-y)에 대해
					// x,y좌표의 합이 짝수인 경우 [짝][짝] or [홀][홀]

					if (((i - x + j - y) % 2) == 0) {
						
						// 해당 좌표가 W가 아니면 다시 칠하기
						if (arr[i][j] != 'W') temp1++;
					}

					// x,y좌표의 합이 홀수인 경우 [짝][홀] or [홀][짝]
					else {
						// 해당 좌표가 B가 아니면
						if (arr[i][j] != 'B') temp1++;
					}

					
				}
			}

			// 첫째 칸이 B인 경우
			for (int i = x;i < x + 8;i++) {
				for (int j = y;j < y + 8;j++) {
					// 위 코드와 동일
					if (((i - x + j - y) % 2) == 0) {

						if (arr[i][j] != 'B') temp2++;
					}
					
					else {
						if (arr[i][j] != 'W') temp2++;
					}
				}
			}

			// 더 적게 칠한 횟수 선택 (min 함수 컴파일 에러;; 왜 나는거지)
			int min = temp1 < temp2 ? temp1 : temp2;
			// 최소 횟수 업데이트
			if (min < count) count = min;
			// 현재 체스판의 다시 칠할 횟수 초기화 후 다음 루프
			temp1 = 0, temp2 = 0;
		}
	}

	printf("%d", count);

	return 0;
}