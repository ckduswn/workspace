#include <stdio.h>

// while문으로 구구단 2단 출력 

int main(){
    for(int i=1; i<=9; i++){
            printf("2x%d=%d", i, 2*i);
        }
    printf("\n");

    int j=1;                        // 증감식 
    while(j<=9){                    
        printf("2x%d=%d\n",j,2*j);
        j+=1;                       // 조건식 
    }
}
    

    