#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 넓이 배열 전역 변수 선언(main함수에서 재활용)
int area[100][100];

// 100X100 크기의 넓이 배열을 통해 x,y를 입력받으면 넓이를 구해주는 함수
void cal_area(int x, int y) {

	for (int i = y;i < y + 10;i++) {
		for (int j = x;j < x + 10;j++) {
			// 좌표상의 넓이를 색칠해줌
			area[j][i]++;
		}
	}
}

int main() {

	// 색종이, 색종이 위치, 총 넓이
	int num, x, y;
	int total=0;
	scanf("%d", &num);

	for (int i = 0;i < num;i++) {
		scanf("%d %d", &x, &y);
		cal_area(x,y);
	}

	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++) {
			// 색칠해진 넓이가 있으면 넓이 +1
			if (area[i][j]) total++;
		}
	}

	printf("%d", total);

	return 0;
}