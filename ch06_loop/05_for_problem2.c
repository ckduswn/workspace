#include <stdio.h>
// 구구단 2~9단
// 반복문1 : 2~9단
// 반복문2 : 단(i*1 ~ i*10)
// → 중첩 for문 
int main(){
    for(int i=2; i<10; i++){                // 2단인지 3단인지 단수를 결정
        for(int j=1; j<10; j++){            // x1~x9 출력
            printf("%dx%d=%d\n", i,j, i*j);
     }
}
}
