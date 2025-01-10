/*
Recursive재귀함수 : 자기 자신을 호출하는 함수



*/

// 1. 무한호출되는 재귀함수 : 지양 
#include <stdio.h>
void fruit(void);
void fruit(void){
    printf("papaya");
    fruit();            // recursive : 무한 호출(무한 루프와 유사)
}
int main(){
    fruit();
}

