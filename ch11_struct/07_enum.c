/*
열거형enum
 - 열거형 변수는 사용할 수 있는 값을 미리 지정해두고 사용하는 방법 
     ex)
     season → {SPRING, SUMMER, FALL, WINTER} 고정
 - 타입 안전성 ↑ : 추가로 안 받기 때문. 열거형{}내의 타입만 받음. 
 - 가독성 ↑ : 0, 1 정수 표현보다 문자열로 표현하기 때문.
 - 유지보수 용이 : 수정시 열거형만 수정하면 나머지는 수정 필요X 
*/

#include <stdio.h>
enum season {SPRING, SUMMER, FALL ,WINTER};
int main(){
    enum season ss;
    char *pc = NULL;

    ss = SPRING;
    switch(ss){
        case SPRING:
        pc="inline";
        break;
        case SUMMER:
        pc="swimming";
        break;
        case FALL:
        pc="trip";
        break;
        case WINTER:
        pc="sking";
        break;
    }
    printf("My leisure extivity : %s\n", pc);

}