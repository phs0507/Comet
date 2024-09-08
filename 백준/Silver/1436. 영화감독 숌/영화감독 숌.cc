#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// while문 반복횟수 cnt
	int n,check,temp,cnt=1;
	scanf("%d", &n);
	//반복 변수 i 설정
	int i;

	// n이 1이면 666 출력 후 종료
	if (n == 1) {
		 printf("666");
		 return 0;
	}
	// 667부터 무한루프 반복
	for (i = 667;;i++) {
		temp = i;
		// check 0으로 초기화
		check = 0;
		
		// temp가 0이 될때까지 반복
		while (temp) {
			// 마지막 3자리 숫자가 666인지 확인
			if (temp % 1000 == 666) {
				// 666이면 check 1로 설정
				check = 1;
			}
			// temp를 10으로 나눠서 다시 루프
			temp /= 10;
		}

		// check가 1인 경우
		if (check) {
			// 반복횟수 +1
			cnt++;
			// 입력받은 n만큼 반복시 break
			if (cnt == n) break;
		}
	}

	printf("%d\n", i);
	
	return 0;
}