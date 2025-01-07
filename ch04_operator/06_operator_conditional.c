#include <stdio.h>
/*
 삼항 연산자(Conditional Operator)
 : 3개의 항을 사용하는 연산자
     1. (Condition) ? value1 value2
         T : v1
         F : v2
*/
int main(){
    int a=10,b=20,res;

    res=(a>b) ? a:b;
    printf("큰 값 : %d\n", res);
}