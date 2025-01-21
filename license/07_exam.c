#include <stdio.h>
// iterator : Find pattern!

int mp(int base, int exp) {         // base에 2 할당, exp에 10 할당 
    int res = 1;
    for(int i=0; i < exp; i++){     // base exp res : base를 exp번 곱한다.
        res = res * base;           // 2    10  1
        // i=0 2    = 1*2
        // i=1 4    = 2*2
        // i=2 8    = 4*2
        // i=3 16   = 8*2
        // i=4 32   = 16*2
        // i=5 64   = 32*2
        // i=6 128  = 64*2
        // i=7 254  = 128*2
        // i=8 512  = 254*2
        // i=9 1024 = 512*2
    }

    return res;         // 정답 
}

int main(){
    int res;
    res = mp(2,10);     // res : mp 함수 호출 
    printf("%d",res);   // 1024
    return 0;
}

