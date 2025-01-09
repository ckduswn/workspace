#include <stdio.h>

/*

별찍기
 반복문1 : 단
 반복문2 : 1단에서 1개, 2단에서 2개...
*/

int main(){
    for(int i=1; i<=5; i++){     // 5번 반복 
        for(int j=1; j<=i; j++){    // 반복의 끝 횟수를 i까지 해야 1단에서 1개.. 
            printf("*");
        }
        printf("\n");              // 별 찍고 개행 
    }
printf("=====================================================\n");
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }


}
