#include <stdio.h>

struct good {
    char name[10];
    int age;
};


void main(){
    struct good s[] = {"Kim",28,"Lee",38,"Seo",50,"Park",35};       // 구조체니까 name+age 한 쌍당 1칸 차지, 즉 4칸짜리 배열이다.
    
    struct good *p;
    p = s;
    p++;
    
    printf("%s\n", p-> name);       // -> : pointer로 struct에 접근할 때 사용 
    printf("%d\n", p-> age);
}