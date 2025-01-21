#include <stdio.h>

int main() {             // a↓
    char a[] = "Art";    // A  r  t  \0
    char *p = NULL;      // pointer 선언, 쓰레기값 보관 방지용 널 저장 
    p = a;               // pointer variable 초기화 
    int i = 0;

    printf("%s\n", a);   // Art
    printf("%c\n", *p);  // A
    printf("%c\n", *a);  // A
    printf("%s\n", p);   // Art 

    for(int i=0; a[i] != '\0'; i++)
        printf("%c", a[i]);     // Art 
}