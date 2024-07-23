#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int N, b, c;
	scanf("%d", &N);
	
	// 시험 감독관 수(최대값은 시험장 * 인원이므로 자료형 long long으로 풀이
	long long proctor=0;

	// N개 시험장에 int만큼의 메모리 동적 할당
	// a는 각 시험장의 학생 수를 배열로 저장	
	int* a = (int*)malloc(sizeof(int) * N);

	for (int i = 0;i < N; i++) {
		scanf("%d ", &a[i]);
	}
	scanf("%d %d", &b, &c);
	
	for (int i = 0;i < N;i++) {
		// 총 감독관 1명이 필요하므로 +1
		proctor += 1;
		// 총 감독관 1명이 담당할 인원을 학생 수에서 제외
		a[i] -= b;

		// 총 감독관이 담당하는 인원 제외하고 인원이 남을 경우
		if (a[i] > 0) {
			// ceil함수를 통해 필요한 부 감독관 수 구하기
			// a=5, c=2일경우 2.~이므로 올려서 3으로 계산
			// 소수점 나눗셈을 위해 a를 실수형으로 변환해줌
			proctor += ceil(a[i]*1.0 / c);
		}
	}
	
	printf("%lld", proctor);

	return 0;
}