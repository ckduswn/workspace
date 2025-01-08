#include <stdio.h>
#include <string.h>
/*
bmi 계산기 
 1. 입력부 : 신장, 몸무게
 2. 제어부 : BMI 계산
 3. 출력부 : BMI 결과 출력 

Bmi 지수 공식 : Kg/m*m

Bmi 범위
 1. 18.5 미만 : 저체중
 2. 18.5~23   : 정상
 3. 23~26     : 과체중
 4. 26~30     : 비만
 5. 30 이상   : 고도비만 
*/ 
int main(){

int h, w;
printf("h(cm): ");
scanf("%d", &h);
printf("w(kg)): ");
scanf("%d", &w);

double hm=(double)h/10;

/*
 2. 제어부
    2-1. Bmi 지수 계산 camelCase
*/
double bmiValue=w/(hm*hm);
// printf("%.2lf", bmiValue);
/*
    2-2. Bmi 등급 책정
*/
char bmiClass[20];
if(bmiValue<=18.5){
    strcpy(bmiClass, "저체중");
}
else if(bmiValue<=23 && bmiValue>=18.5){
    strcpy(bmiClass, "정상");
}
else if(bmiValue<26 && bmiValue>=23){
    strcpy(bmiClass,"과체중");
}
else if(bmiValue<30 && bmiValue>=26){
    strcpy(bmiClass, "비만");
}
else if(bmiValue>=31){
    strcpy(bmiClass, "고도비만");
}

// 3. 출력부
printf("당신의 신장은 %dcm, 몸무게는 %d kg으로 당신의 bmi지수는 %.2lf로 %s입니다.",h, w, bmiValue, bmiClass);

}