#include <stdio.h>

// 1부터 100까지 더하기기

int main(){

    int total=0;                   // 덧셈 결과를 저장할 변수
    for(int i=1;i<101; i++){
        // total = total + i;      // 최종 i값은 100이 아닌 101
        total+=i;    

        if(total>=30){             // 누적합이 30보다 크면 반복 중단단
            break;
        }
    }
 printf("1~100까지 합은 %d", total); 

}