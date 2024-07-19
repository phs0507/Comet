#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 등급 계산 함수 (과목 평점 반환)
double Grade_calculate(char grade[]) {

    if (strcmp(grade, "A+") == 0) return 4.5;
    if (strcmp(grade, "A0") == 0) return 4.0;
    if (strcmp(grade, "B+") == 0) return 3.5;
    if (strcmp(grade, "B0") == 0) return 3.0;
    if (strcmp(grade, "C+") == 0) return 2.5;
    if (strcmp(grade, "C0") == 0) return 2.0;
    if (strcmp(grade, "D+") == 0) return 1.5;
    if (strcmp(grade, "D0") == 0) return 1.0;
    if (strcmp(grade, "F") == 0) return 0.0;
    if (strcmp(grade, "P") == 0) return -1;  // P일 경우 계산에서 제외하기 위해 -1 반환
}

int main() {

    // 수강한 전공 과목 개수 20개
    int subjects=20;
    // 과목명 (최대 50)
    char subject_name[50];
    // 과목 학점 (4.0학점 ~ 1.0학점) 1학점짜리~ 4학점짜리까지 구분
    double credit;
    // 등급 (A+부터 F까지) P일 경우 계산에서 제외
    char grade[3];
    // 전공 평점 총합 (학점 * 평점)
    double totalGP=0.0;
    // 학점 총합
    double total_credit=0.0;

    // 과목명, 학점, 등급 입력
    for (int i = 0;i < subjects;i++) {
        scanf("%s %lf %s", subject_name, &credit, grade);

        // 과목의 평점 계산
        double GP=Grade_calculate(grade);
        
        // P 아닌 경우 계산해서 총 과목 평점과 총 학점에 더하기
        if (GP != -1) {
            totalGP += credit * GP;
            total_credit += credit;
        }
    }
    // 최종 전공 평점 구하기
    double GPA = totalGP / total_credit;
    printf("%.6f", GPA);

    return 0;
}