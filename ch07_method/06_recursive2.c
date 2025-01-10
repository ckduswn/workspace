#include <stdio.h>
void fruit(int count);      // 숫자 세는 매개변수수수수퍼노바바
void fruit(int count){
    printf("papaya");

    if(count==3){           // 일종의 break문문
        return;                                     // 여기서 하나 종료되고 
    }
    fruit(count+1);         // 재귀 거듭할수록 +1   // 호출부로 돌아옴,,맞냐
}
int main(){
    fruit(1);
}

