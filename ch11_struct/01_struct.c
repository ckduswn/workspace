/*
구조체struct
 - 배열은 여러 값을 저장할 수 있지만 동일한 자료형만 가능.
 - 정수, 실수, 불리언, 문자열, ...서비스 로직 개발시 다양한 자료형 필요.
 - 구조체는 다양한 자료형을 하나로 묶을 수 있는 복합 자료형
 - 구조체는 객체 지향 언어의 Class와 비슷
 - 구조체와 함수 포인터를 함께 사용하면 객체지향적 설계를 흉내낼 수 있음.
 - 구조체의 선언은 main() 앞이면 어디서든 가능 → 전역
 - 구조체의 선언을 함수(){} 내로 선언하면 함수 내에서만 사용 가능 → 지역
 - 구조체 사용 방법
     1. 구조체 정의 
         → 정의한 구조체를 컴파일러가 인식 
             ex)
             struct student{
             int num;               //      자료형을 만들어서 쓰는 것. 배열이 아니라 변수 선언한 거니 s1[1](X), s1.num(O)
             double grade;
             }

     2. 구조체 변수 선언
         → 저장 공간 할당 
         → 각 멤버의 공간이 메모리에 연속으로 할당
         → 구조체 변수의 크기는 각 멤버의 바이트 크기를 더한 값
             ex) struct student s1;
             ex) int + double → 4Byte + 8Byte == 구조체 변수 크기(12Byte) 
     3. 구조체 변수 사용
         → main()함수 앞에 위치하면 전역으로 사용
         → 함수 내에 선언하면 지역으로 사용 
         ex)
         s1.num; or s1.grade;

 - 구조체 변수의 크기 
     - 모든 시스템은 데이터를 빠르게 읽고 쓰기 위해 일정한 크기 단위(block)로 메모리 접근 
     - 컴파일러는 구조체 멤버의 크기가 들쑥날쑥한 경우 멤버 사이에 padding byte를 사용해서 정렬. → Byte Alignment 
     - Byte Alignment는 멤버 중 크기가 가장 큰 자료형을 기준으로 할당 → 남은 메모리 공간엔 패딩 충전재로 채워둔다고 생각하면 됨. 
     - 따라서, 구조체의 요소와 선언 순서에 따라 필요한 메모리 공간이 다름(By padding byte) 
         ex)
         int, int, double
         8Byte block → int(4) + int(4)
         8Byte block → double(8)

         int, double, int : padding byte(8)만큼 메모리 낭비 
         8Byte block → int(4) + padding(4)
         8Byte block → double(8)
         8Byte block → int(4) + padding(4)
*/

#include <stdio.h>
struct student{             // 1. 구조체 선언 
    int num;                //   - num 멤버변수 선언
    double grade;           //   - grade 멤버변수 선언 
};                          //   - 구조체 {} 끝엔 ; 붙여야 함.
int main(){
    struct student s1;      // 2. 구조체 변수 선언

    s1.num=2;               // 3. 구조체 변수 사용  
    s1.grade=4.2;
    printf("id : %d\n", s1.num);
    printf("grade : .1lfn", s1.grade);

}