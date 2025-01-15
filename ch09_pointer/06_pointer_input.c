/*
pointer 대입 규칙
 - 포인터는 가리키는 변수의 자료형이 같을 때만 대입 가능
 - 형 변환을 사용한 포인터의 대입은 언제나 가능 
    ex)
    double a=3.4;
    double *pd=&a;
    int *pi;            // 초기화 안된 상태 
    pi=(int *)pd;       // 아스테릭크 없다 = 주소(pd). int * : casting ,, int형 변수의 주소로 형 변환 

*/

#include <stdio.h>
int main(){
    int a=10;
    int *p=&a;
    double *pd;
    
    // &a = &b; (X) : 주소(상수)는 변수처럼 초기화 불가능 
    // pd = p;    (X)
    // printf("%lf\n", *pd); 

}