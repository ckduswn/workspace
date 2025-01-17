/*
struct(member variable) in struct! 
*/
#include <stdio.h>
struct profile {
    int age;
    double height;
};

struct student {
    struct profile pf;          // → student 구조체 내에 멤버 변수로 profile 구조체 선언 
    int id;
    double grade;
};

int main(){
    struct student s1; 

    s1.pf.age = 22;             // . : 참조연산자. 뒤에 자동완성으로 참조할 수 있는 것들이 나옴.
    s1.pf.height = 161.4;
    s1.id = 20243146;
    s1.grade = 2.0;

    printf("age:%d\n",s1.pf.age);
    printf("height:%d\n",s1.pf.height);
    printf("id:%d\n",s1.id);
    printf("grade:%d\n",s1.grade);
}