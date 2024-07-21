#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

// 가장 많이 사용된 알파벳의 빈도수 배열 count, 주어진 단어 word
int count[26];
char word[1000000];
// 빈도수가 똑같을 경우를 검사하기 위한 변수
int freq=0;
// 문제에서 원하는 답 APB
char APB;

scanf("%s",word);

// 단어의 길이를 저장
int length=strlen(word);

// 주어진 단어를 돌며 소문자일 경우('a'의 아스키 값 이상이면) 그 알파벳의 빈도수 +1
// 대문자일 경우('a'의 아스키 값 미만이면)
for(int i=0;i<length;i++)
    if(word[i]>='a'){
        count[word[i]-'a']++;
    }
    else {
        count[word[i]-'A']++;
    }


for(int i=0;i<26;i++)
// 최고빈도수를 가진 알파벳이 여러개 존재할 경우 APB에 ?를 저장
    if(count[i]==freq){
        APB='?';
    }
// 최고빈도수보다 높을 경우 freq를 업데이트하고 APB에 해당 알파벳을 대문자로 저장
    else if (count[i]>freq){
        freq=count[i];
        APB='A'+i;
    }


printf("%c",APB);

return 0;
}
