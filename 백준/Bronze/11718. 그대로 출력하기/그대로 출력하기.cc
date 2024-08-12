#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	char a;

	// 입력에 성공시 1, 실패시 0 반환 = 입력받은 문자를 그대로 출력
	while (scanf("%c", &a) == 1) {
		printf("%c", a);
	}

	return 0;

}