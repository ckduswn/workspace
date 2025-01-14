#include <stdio.h>
/*
Calc array length
 - C : sizeof()
 ※ C언어 이외 객체지향언어(JAVA, PHTHON etc)
     - 배열을 객체로 표현
     -기본적으로 배열명.length → 배열 길이
                len(배열명)   → 배열 길이이
*/
int main(){
    int score[5];
    // sizeof(score)       // 20 Byte
    // sizeof(score[0])    // 4 Byte
    int count = sizeof(score)/sizeof(score[0]);
    printf("array length : %d",count);

    for(int i=0; i<count; i++){
        
    }
    
}