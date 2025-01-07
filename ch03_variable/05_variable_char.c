#include <stdio.h>
#include <string.h>     // 문자열을 다룰 수 있는 헤더 파일
/**
 * char   : 문자열   ex) 'A'
 * String : 문자열형 ex) "ABC"
 * ※ C언어는 문자열형 존재하지 않음 : 절차지향이라서. → 배열 + char형 구조로 저장장
 *   - JAVA, Python, JAVAScript 문자열형 존재함 → 객체(String)
 * 
 * char 배열명[문자열길이+1] = 문자열;
 * ex) char abc[4] = "ABC"
 * - 문자열길이+1? 문자열 끝에 '\0'(null 문자) 자동 추가 때문.
 * - 배열이란 기본자료형을 여러 개 묶어서 사용하는 것 
 * 
 * */
int main(){
    char arr_fruit[20] = "strawberry";      // char배열 선언 및 문자열 초기화 
    printf("딸기 : %s\n", arr_fruit);

    // arr_fruit = "apple";                 // 이러면 않되. 에러나. 외? 문법오류기 때문.
                                            // 배열은 선언된 이후 대입연산자로 값 입력 불가!
                                            // strcpy() 함수 사용으로 가능케 함 → 문자열 복사 기능
strcpy(arr_fruit, "apple");
printf("%s\n",arr_fruit);
} 