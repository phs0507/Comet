#include <stdio.h>
 
int main(){
  
      int a,b,v,d;
      scanf("%d %d %d",&a,&b,&v);

    // 올라가야 하는 거리 = v-b (낮에 올라가서 정상까지 도달한다는 가정) = d*(a-b)
    // d= (v-b)/(a-b) 이지만 제대로 나눠지지 않는 경우를 가정해 식을 수정
    d = ( v - b - 1) / ( a - b) +1;
    printf("%d",d);
  

    return 0; 
}