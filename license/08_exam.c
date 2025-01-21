#include <stdio.h>

int main(){
    int arr[3];  
    int s = 0;
    *(arr+0)=1;                 // arr[0] = 1

    arr[1] = *(arr+0)+2;        // 1+2      arr[1] = 3
    arr[2] = *arr+3;            // 1+3      arr[2] = 4

    for(int i=0; i<3; i++){
        s=s+arr[i];             // 1 + 3 + 4 = 8
    }

    printf("%d",s);  // 1 + 3 + 4 = 8
}