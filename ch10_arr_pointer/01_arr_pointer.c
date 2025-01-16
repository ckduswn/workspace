/*
Arr and Pointer
 - 배열을 어떻게 포인터로 사용할 수 있을까? 
 - 포인터 배열(!=Arr and Pointer) → 포인터를 배여로 만들어서 사용!

Operate Pointer
 - 포인터는 +, - 만 가능
 - 포인터 변수+1은 자료형을 가르키는 포인터에 따라 다르게 연산됨
 - 일반적으로 포인터의 덧셈과 뺼셈은 포인터가 가르키는 자료형만큼 증가하거나 감소 
     ex) pa(101번지)
         char   pa+1(sizeof(char))   → 102번지
         int    pa+1(sizeof(int))    → 105번지
         double pa+1(sizeof(double)) → 109번지 

배열 → 변수를 여러 개 붙여 선언하는 것과 동일 
배열이름 == 배열의 시작 주소
      ex) int arrNum[3] = {7, 8, 9};
          arrNum = 시작주소(101번지) 
          Arr Index  :    [0]          [1]          [2]
          Memory     : [101~104]    [105~108]    [109~112] 
          Real Value :     7            8            9

          - *(arrNum + 0) == arrNum[0]
          - *(arrNum + 1) == arrNum[1]      // 101+1(int:4Byte) → 105번지 
          - *(arrNum + 2) == arrNum[2]

          일반변수 int num=4;
          배열변수 int arrNum[3] = {1, 2, 3};
          포인터변수 int *pa;
          pa = &num;    // 일반변수 : 주소연산자 써야 주소 알 수 있음.
          pa = arrNum;  // 배열변수 : 변수명이 주소 자체기 때문에 일반변수처럼 & 사용 필요X 

배열요소(item) 접근 방법
 int *pa;   // 101번지
 1. 정수연산            pa+1        → 105번지(101+1(int:4Byte) 
 2. 간접참조연산        *(pa+1)     → 105번지 간접참조(2번째 요소)
 3. 배열요소 표현식     pa[1]       → 배열[1] 인덱스(2번째 요소) 

*/

#include <stdio.h>
int main(){
    int arrNum[3];          // 4Byte 크기의 int형 변수를 3개 생성해서 연결 : 총 12Byte
    *(arrNum+0) = 11;
    *(arrNum+1) = *(arrNum+0) + 10;
    printf("third arr 요소 : ");
    scanf("%d", arrNum+2);  // 101 + 8 == 109번지
    
    for(int i=0; i<3; i++){
        printf("%d\n", *(arrNum+i));
    }





}