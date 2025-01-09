#include <stdio.h>

/*
 1. 정수값 입력 받기 ex.412
 2.
 3. 출력 : 4+1+2=7
*/

int main(){
    int num;
    printf("입력: ");
    scanf("%d", &num);

    int x=(num/100);
    int y=(num-(x*100))/10;
    int z=(num-(x*100)-(y*10)); 
    int t=x+y+z;

    printf("%d", t);


}