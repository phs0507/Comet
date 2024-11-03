#include <stdio.h>

int cnt1=0;
int cnt2=0;

int fib1(int n){
    if (n == 1 || n == 2){
        cnt1++;
        return 1;
    }
    else return (fib1(n-1)+fib1(n-2));
}

int fib2(int n){
    int fib[50] = {0,1};
    for (int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        cnt2++;
    }
    return fib[n];
}

int main(){
    int n;
    scanf("%d",&n);
    fib1(n);
    fib2(n);
    printf("%d %d",cnt1,cnt2);
    
    return 0;
}