/*
지시자 
 1. #include : 지정한 file을 source code에 include
     ex) #include <stdio.h> : include 디렉토리에서 stdio.h file을 찾아 code에 copy 
 2. #define : macro 상수와 macro 함수를 만들 때 사용 
     ex) #define PI 3.14             : PI는 상수 3.14로 변경 
     ex: #define SUM(x, y) ((x)+(y)) : SUM(10, 20)은 ((10)+(20))으로 변경 
 3. 조건부 컴파일 지시자 : #if, #else, #elif, #ifdef, #ifndef, #endif 

C언어의 컴파일 과정(3단계)
 ■ Source File(abc.c) : 직접 codding 
     1step) 전처리
         - 지시자(#include, #define, ...etc.)에 따라 프로그램에 필요한 소스 중 외부에 있는 source를 불러옴 
     
     ↓

 ■ 전처리된 Source File 
     2step) compile 
         - CPU가 해석할 수 있는 명령어들로 구성된 기계어로 변환 
         - 그러나 바로 실행은 불가. 프로그램 운영체제(window, Linux, ...etc.)에 의해 실행되므로 설치된 운영체제가 인식할 수 있도록 변경 필요 
     2-2) Compile + Assembly
         - Compile : 전처리된 source file → assembly language 
         - Assembly : assembly language → 기계어 
         ※ C언어의 compile 과정 4단계(세분화) 
         1. 전처리(abc.i) → 2. Comlile(abc.s) → 3. Assenbly(abc.o) → 4. Link(abc.exe) 

     ↓

 ■ Object File(abc.o) 
     3step) Link
         - startup cde(프로그램 실행 전 필요한 준비작업)을 결합하는 과정
         - startup code에서 main()를 호출
         - main() 작성된 code가 실행 

     ↓
 
 ■ 실행 File(abc.exe) 

         

*/

#include <stdio.h>
int main(){
    

}