#include <stdio.h>
int main(){
// 0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램

int sc;       // 0~100점
char grade ;     // ABCDF

// 1. 입력부 
printf("score: ");
scanf("%d", &sc);

/*
 ※ 유효성 체크 : 사용자가 입력한 값이 유효한 값인지 체크
 1. 값이 있는지 체크크
 2. 정수형 숫자인지 체크
 3. 0~100 사이의 값인지 범위 체크크
 */ 

/*
A 91~100
B 81~90
C 71~80
D 61~70
F ~60
*/

// 2. 제어부 
if(sc>=91 && sc<=100){
    printf("grade : A\n");
}
else if(sc>=81 && sc<=90){
    printf("grade : B\n");
}
else if(sc>=71 && sc<=80){
    printf("grade : C\n");
}
else if(sc>=61 && sc<=70){
    printf("grade : D\n");
}
else{
    printf("grade : F\n");
}

// 3. 출력부 
printf("Your score is %d, so you're grade is %c", sc, grade);

}


