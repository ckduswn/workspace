#include <stdio.h>

void main()
{   
    // p → 101번지 
    // p+1 → 주소 연산 : 101번지 + 1*char(1Byte) = 102번지 
	char *p = "KOREA";         // KOREA\0 총 6자, K의 주소(101번지) 할당
    printf("%s\n" , p);        // 101번지부터 널 문자까지 출력 : KOREA
    printf("%s\n" , p+3);      // 주소 연산 : 104번지부터 널 문자까지 출력 : EA
    printf("%c\n" , *p);       // 간접참조 101번지 값 : K
    printf("%c\n" , *(p+3));   // 간접참조 104번지 값 : E
}