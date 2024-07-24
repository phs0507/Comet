#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// n입력 반복문 n개 score 입력(점수 배열)
	// 입력받은 score중 최댓값 max 구하기
	// 입력받은 모든 score을 score[i]/M*100으로 바꾸고 더하기
	// 새로 바뀐 평균을 출력
	int n;
	int max = 0;
	int score[1000];
    // 소수점 계산을 위한 실수형 변수 선언
	double total = 0.0;

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &score[i]);

        // 현재 최고점수보다 클 경우 최고점수를 업데이트
		if (score[i] > max) {
			max = score[i];
		}
	}

    // 점수를 바꾼후 모두 더함
	for (int i = 0;i < n;i++) {
		total += (double)score[i]/max*100;
	}

	double new_ave = total / n;

	printf("%f", new_ave);

	return 0;
}