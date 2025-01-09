#include <stdio.h>
// 피보나치 수열 : 첫째 및 둘째 항이 1이면 
// 그 뒤 모든 항은 바로 앞 두 항의 합인 수열
// a b t
// 1 1 2 3 5 8 13
// 1+1 2/ 1+2 3/ 2+3 5/ 
int main(){
    
    // next=a;
    // fibo=a+b;
    // fibo+=next;

    int a=1, b=1;
    int fibo;
    printf("%d %d ", a, b);

    while(1){       // 1 == T : 무한반복. if와 while에 해당 
        fibo=a+b;   // 2
        printf("%d  ", fibo);
        a=b;
        b=fibo;
            
    if(fibo>13){
        break;
    }
    }
   }
