/*
구조체를 사용하면 다양한 자료형을 하나로 묶어서 사용 가능
 → 구조체를 여러 개 만들어 사용하는 경우 메모리 낭비 발생 
 → 이때 공용체 사용하면 메모리 낭비 없이 사용 가능! 

Union(공용체)
 - 공용체는 모든 멤버가 하나의 저장 공간을 같이 사용 
 - struct 대신 union 키워드 사용 
 - 공용체 변수의 크기는 멤버 중 크기가 가장 큰 멤버로 결정 

Union 사용처
 1. 여러 데이터 중 한 번에 하나만 활성화 되는 값을 저장할 때 메모리를 절약. 
 2. 여러 형식의 데이터를 처리해야 하는 경우 : 하나의 값을 사용하는데 동적으로 자료형이 변하는 경우 
*/


#include <stdio.h>

union student{                          // union variable 선언 및 초기화 
    int num;                            //  - union member 중 가장 큰 자료형 → double 8Byte 저장공간 확보 
    double grade;                       //  - num과 grade가 하나의 공간을 공유! 
};
int main(){
    union student s1 = {315};           //  int num을 315가 꿰참.

    printf("id: %d\n", s1.num);
    s1.grade=2.0;                       // s1.num 지워버리고 이제 s1.grade가 꿰참.
    printf("grade: %.lf\n", s1.grade);
    printf("id: %d\n", s1.num);

}
