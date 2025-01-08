#include <stdio.h>
int main(){

// 두 수를 입력 받고 크기를 비교하는 프로그램

int num1, num2;
printf("입력: ");
scanf("첫 번째 수 : %d", &num1);
scanf("두 번째 수 : %d", &num2);

if(num1>num2){
    printf("%d가 더 크다.", num1);
}
else if(num1<num2){
    printf("%d가 더 크다.", num2);
}
else if(num1==num2){
    printf("%d와 %d는 같다.", num1, num2);
}


}