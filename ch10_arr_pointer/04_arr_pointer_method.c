/*
배열요소의 개수가 다른 배열을 출력하는 함수 
*/

#include <stdio.h>
void print_ary(int *pa, int size);      // 3. 함수 선언 
void print_ary(int *pa, int size){      // 1. 함수 정의 
    for(int i=0; i<size; i++){
        printf("%d", pa[i]);
    }
}
int main(){
    int ary1[5]={10, 20, 30, 40, 50};
    int ary2[7]={10, 20, 30, 40, 50, 60, 70};
    print_ary(ary1, 5);     // 2. 함수 호출(출력 함수X)
    printf("\n");
    print_ary(ary2, 7);

}