#include <stdio.h>
struct vision{                                          // 구조체 선언 및 정의 
    double left;
    double right;
};
struct vision exchange(struct vision robot);            // function 선언
struct vision exchange(struct vision robot){            // fucntion 정의 | 매개변수 : struct값을 받겠다. 
    double temp;
    temp=robot.left;
    robot.left=robot.right;
    robot.right=temp;   
    return robot;                   // 이거 안 하면 원본값 안 바뀜. need1.c 참고. 
}
int main(){
    struct vision robot;

    printf("시력: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));

    robot = exchange(robot);        // 원본값 바꾸는 방법 
    printf("시력 after exchange : %.1lf %.1lf", robot.left, robot.right);

}