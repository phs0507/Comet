#include <stdio.h>

int fib(int n){
    if (n>=2) {
        return fib(n-1)+fib(n-2);
    }
    if (n==1) return 1;
    else return 0;
}
int main(){
    int n,result;
    scanf("%d",&n);
    result = fib(n);
    printf("%d\n",result);
    
    return 0;
}