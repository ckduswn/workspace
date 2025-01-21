#include <stdio.h>

void main(){
	int i=0, c=0;
	
    while (i<10){
		i++;			// 후위 연산이니까 c와의 연산 후 +1
		c *= i;
    }

	printf("%d",c);		// answer : 0, c는 증가를 안 하기 때문에 계속 0이니까.
}