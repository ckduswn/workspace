/*
Variable : 하나의 값을 저장하는 메모리 공간
     - 프로그래밍 언어에서는 메모리에 데이터들을 저장
     - 메모리는 주소를 갖고 있음(1번지, 2번지,...)
     - 1번지마다 1Byte 크기
        ex) 100 Byte 메모리 사용 중, 주소 → 0번지 ~ 99번지
     - 변수의 자료형에 따라 사용하는 주소의 크기가 다름
       ex) char   → 1 Byte  Char a = 'A';   / 0번지에 ('A') 저장
           short  → 2 Byte  int num = 4;    / 1~4번지 (4) 저장 
           int    → 4 Byte
           float  → 4 Byte
           double → 8 Byte  double dl 3.14; / 5~12번지 (3.14) 저장 
           ※ 배열 변수는 모든 값이 아니라 시작 주소만 저장 
     - 변수 이름이 동일하더라도 선언된 곳에 따라서 별도의 저장공간 확보

     - 주소 연산자(&) : 변수가 할당된 메모리 공간의 시작 주소 의미 


*/

#include <stdio.h>
int main(){
    char a;
    int b;
    double c;

    // %u(unsigned) : 기호 제거(양수)
    // %p(pointer)  : 16진수 주소 표현(1~9 A~F)
    printf("char형 변수의 주소 : %u\n", &a);
    printf("int형 변수의 주소 : %u\n", &b);
    printf("double형 변수의 주소 : %u\n", &c);

}