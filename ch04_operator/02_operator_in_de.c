#include <stdio.h>
/*
 증감 연산자
 ++ : 1 증가
 -- : 1 감소

 ↓ 이름 외울 필요X, 차이 숙지 ↓ 
 ++a : 전위형 증감 연산자 : +1 후 연산 실행 
 a++ : 후위형 증감 연산자 : 연산 실행 후 +1
*/
int main(){
    int a=5, b=5;
    int pre, post;

    pre = (++a)*2;    // (5+1)*2 : +1 후 연산 실행 
    post= (b++)*2;    // (5*2)+1 : 연산 실행 후 +1
  
    printf("초기값 : %d, %d\n", a, b);
    printf("전위형 : %d\n", pre);
    printf("후위형 : %d\n", post);

}