// 성적 계산기
// 3과목의 성적(0~100) 입력 받고
// 배열에 저장
// 총점과 평균 계산
// 출력 
#include <stdio.h>
int main(){
    char name[20];      // name
    int score[3];       // grade
    int total=0;        // total, 초기화 안 하면 쓰레기값 들어가서 계산 이상해짐.
    double avg;         // average

    // 1. 입력부 
    printf("name : ");
    scanf("%s", name);

    for(int i=0; i<3; i++){     // i : 0~2, array index
    printf("score: ");
    scanf("%d", &score[i]);     // 점수를 입력 받아 배열에 저장
    }

    printf("%d", score[0]);
    printf("%d", score[1]);
    printf("%d", score[2]);


    // 2. 계산부 
    for(int i=0; i<3; i++){
        total+=score[i];
    }
    avg=total/3.0;

    // 3. 출력부
    printf("%s's total score is %d, avg is %.2lf.", name, total, avg);
    
}