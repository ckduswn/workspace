#include <stdio.h>
/*
재귀함수와 for문의 차이
 - 재귀함수는 코드를 반복실행하는 것처럼 보이지만 실제론 새 함수를 실행하는 것과 동일
 - 재귀함수는 최초 호출했던 곳이 아닌 이전에 호출했던 재귀함수로 돌아감 
*/


void fruit(int count);      
void fruit(int count){
    printf("papaya\n");
    if(count==3){          
        return;                                    
    }
    fruit(count+1); 
    printf("jam\n");       // 함수 종료 시 출력(타고x3 내려오며 종료되어 감)
}
int main(){
    fruit(1);
}

