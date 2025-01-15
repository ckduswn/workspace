#include <stdio.h>
int main(){
    int a=10, b=15, total;      // 일반 변수 선언 및 초기화
    double avg;                 // 일반 변수 선언
    int *pa, *pb;               // 포인터 변수 선언
    int *pt=&total;             // 포인터 변수 선언 및 초기화 
    double *pg=&avg;            // 포인터 변수 선언 및 초기화

    // *포인터 변수는 선언시에만 * 붙이고 사용시엔 안 붙임 
    pa=&a;                      // 포인터 변수 pa 초기화
    pb=&b;                      // 포인터 변수 pb 초기화 

    *pt= *pa + *pb;             // total = a+b
    *pg= *pt/2.0;               // avg = total/2.0

    printf("두 정수 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);
    
    // 포인터 변수를 왜 사용하는가? 그냥 일반 변수 쓰면 되는 것 아니냐?
    // 1. 효율굳 : 크기가 큰 데이터 사용시
    // 2. 반드시 : swap(값 치환)시 

}