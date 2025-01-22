#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile{
    char name[20];
    int age;
    double height;
    char *intro;                           // member variable : pointer(자기소개) 
};
int main(){
    struct profile s1;
    strcpy(s1.name, "ckduswn");
    s1.age=22;
    s1.height=161.4;

    // 메모리 동적 할당 
    s1.intro =  (char*)malloc(80);        // pointer variable 초기화(필수!) 
    printf("intro : ");
    gets(s1.intro);                       // gets : scanf. intro : pointer(주소), 주소 할당 안 해줬으니 쓰레기값 들어있을 것. 초기화 필수! 

    printf("name : %s\n", s1.name);
    printf("age : %d\n", s1.age);
    printf("height : %.1lf\n", s1.height);
    printf("intro : %s\n", s1.intro); 

    free(s1.intro);                       // 동적 할당 영역 반환. 동적 할당 : 공중화장실. 나 쓰는 동안에만 내 소유고 다 쓰면 문 열어두고 반납해야지! 
}