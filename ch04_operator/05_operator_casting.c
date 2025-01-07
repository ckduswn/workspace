#include <stdio.h>
/*
 형 변환(Casting)
     1. promotion(small type = big type) 
         - Non Problem, 자동 형 변환 
         ex) int(smaller)값을 double(bigger)값에 담는다. 
    2. Casting(big type = small type)
         - 값 손실(국 넘침ㅎㄷ) : 직접 코드 작성 요망 
         ex) 3.14 → int(3)

 */

int main(){
    // promo
    double res;
    res=5;                    // int형 입력  
    printf("%.1lf\n", res);   // double형 출력 

    // casting
    double pi = 3.14;
    int a;
    a=pi;
    printf("%.d", a);
}