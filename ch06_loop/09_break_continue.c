#include <stdio.h>

/*
break    : 즉시 반복문을 빠져 나가세요.(반복문 더 이상 실행X)
continue : 즉시 다음 반복으로 넘어가세요.
*/

int main(){
for(int i=1; i<=10; i++){
    if(i%2==0){
        continue;       // odd free pass
    }
    if(i==5){
        break;
    }
    printf("%d\n", i);
}
}