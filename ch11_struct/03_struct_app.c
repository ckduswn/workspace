#include <stdio.h>
struct student{
    int id;
    char name[20];
    double grade;
};
int main(){
    int num1=10, num2=20, num3=30;
    struct student s1 = {315, "ckduswn", 1.5},          // 선언 + 초기화 
                   s2 = {316, "boogie", 3.3},
                   s3 = {317, "onandon", 9.9}; 
    struct student max;                                 // 선언 
    max = s1;
    if(s2.grade > max.grade){
        max=s2;
    }
    if(s3.grade < max.grade){
        max=s3;
    }
    printf("id(%d), name(%s), grade(%.1lf)", max.id, max.name, max.grade);
}