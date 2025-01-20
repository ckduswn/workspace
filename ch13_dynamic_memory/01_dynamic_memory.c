/*
메모리 동적 할당 
 - 프로그램 실행 중 메모리를 동적으로 할당
 - malloc()  : 메모리 동적 할당
 - calloc()  : 지정한 크기의 메모리를 할당하고 초기화되지 않은 메모리 반환 
 - realloc() : 기존 메모리 크기를 조정(확장 또는 축소) 
 - free()    : 동적 할당된 메모리 메모리 해제 

메모리 동적 할당 사용처
 1. 사용자 입력에 따른 메모리 크기가 달라지는 경우 
     - 배열 크기를 동적으로 생성시 
 2. 큰 데이터 구조를 사용할 때 
     - 정적 → stack memory 영역 할당 : 제한적 
     - 동적 →  heap memory 영역 할당 : 매우 큼 
     - big data 구조를 heap 영역에 할당하면 메모리 부족 해결 가능 
 3. 데이터 구조가 실행 중 동적으로 변하는 경우 
     - 자료구조 : Linked List, Tree, Graph, ...etc. 
 4. 메모리를 효율적으로 관리하고 할 때
     - 필요할 때 메모리를 할당하고 해제하여 메모리 낭비를 줄임 : 정적배열과 동적배열의 차이
         - 정적배열은 항상 동일한 크기의 배열을 메모리 할당 
         - 동적배열은 필요한 만큼만 할당하고 추가 및 반환 
 5. 재귀 호출이 많은 경우
     - stack 할당 → 메모리 부족
     - 동적으로 heap영역에 할당 
 6. 메모리 크기가 유연할 때 
     - 데이터를 추가하거나 삭제할 필요가 있을 때 크기를 조정할 수 있는 메모리 할당 : realloc() 

*/

#include <stdio.h>
#include <stdlib.h>         // malloc, free함수 사용을 위한 헤더 파일 
int main(){
    int *pi;
    double *pd;

    // 4byte의 memory 공간을 dynamic으로 할당 → pi pointer에게 전달 
    // 형 변환(int *) : pointer variable의 형 !=(→ ==) 넣으려는 자료의 주소 자료형 
    pi = (int *)malloc(sizeof(int));     

    // Exception 
    if(pi=NULL){
        printf("메모리가 부족합니다.\n");
        exit(1);
    }

    pd=(double*)malloc(sizeof(double));

    *pi=10;
    *pd=3.14;

    printf("정수: %d\n", *pi);
    printf("실수 : %.2lf\n", *pd);

    // 동적 할당 메모리 반환
    free(pi);
    free(pd);



}