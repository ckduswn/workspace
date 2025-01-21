#include <stdio.h>
// switch case : break문 중요! 없는 문제가 다수 출제되지만.. 
// 정답: BCD

int main() {
    int n[3] = {73, 95, 82};
    int sum = 0;

    for(int i=0; i<3; i++) {
        sum += n[i];
    }

    switch(sum/30) {
        case 10:
        case 9: printf("A");
        case 8: printf("B");    // 해당하는 여기부터 default까지 쭉 실행 
        case 7:
        case 6: printf("C");
        default:  printf("D");
    }
}