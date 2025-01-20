/*
scanf()와 getchar()의 차이점
 1. scanf()
     - 형식화된 input을 처리하기 위해 사용
         ㄴ 형식 지정자(%d, %lf, ...etc.)를 통해 input 형식 지정
     - 공백을 무시하며 data를 token 단위(문자의 최소한의 단위, 문자 하나가 아님.)로 읽음 
     - 여러 값을 한 번에 입력 가능 
 2. getchar()
     - 사용자 input을 한 문자씩 읽음.
     - 공백과 개행문자를 포함한 모든 입력을 읽음. 
     - buffer에서 input을 한 글자씩 처리하기 때문에 간단한 입력 작업에 적합
     - 많은 data를 입력받는데 부적합 
*/


#include <stdio.h>
int main(){
    int ch;
    
    while(1){
        ch=getchar();
        if(ch==EOF){        // Ctrl + z : EOF(Window)
            break;
        }
        putchar(ch);
    }

}