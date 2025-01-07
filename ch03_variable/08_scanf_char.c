# include <stdio.h>
int main(){
    char grade;          // 문자(학점)입력
    char name[20];       // 문자열(이름)입력력

    printf("학점: ");
    scanf("%c", &grade);

    printf("이름: ");
    scanf("%s", name);   // 문자열은 포인터 사용X, 베열이기 때문.
    printf("%s의 학점은 %c입니다.", name, grade);
}