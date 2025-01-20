/*
파일 입출력(File Input/Output) 
 1. r(read)     : 읽기, 읽어서 가져온다.
 2. w(write)    : 쓰기, 쓴 내용을 '저장'한다.
 3. a(append)   : 파일 내용 추가, 기존 내용 유지한 채로 최하단에 '추가'만 한다.
 - fopen()      : 파일 열기
     - 실제 파일이 있는 장치와 연결되는 스트림파일을 메모리에 생성
         cf) streaming : 하나를 통째로 한 번에 보내기엔 용량이 크니까 일정한 크기로 block들을 쪼개서 분할 전송 
         ※  buffering : 임시 메모리 공간(속도 조절), stream이나 printer 사용시 사용  
 - fclose()     : 파일 닫기
 - File pointer 사용
 - Differnce of putchar() and printf()
     1. putchar()
         - 한 글자만 출력
         - 출력하는 문자는 반드시 char 또는 ASCII 값으로 표현
         - 간단한 문자 출력에 적합 
     2. printf()
         - 형식화된 문자열을 출력 
             ㄴ %d, %c, %s : 형식 지정자
         - 형식 지정자를 사용해서 여러 데이터 형식 출력 가능
         - 출력 실패시 음수 반환 
         - putchar()에 비해 무거움 

*/

#include <stdio.h>
void main(){        // int main()이면 int형 return value 있어야 하는데 없으니 오류 발생 
    FILE *fp;       // file pointer 선언 
    int ch;         // 문자 저장할 variable  

    fp = fopen("abc.txt", "r");   // read mode  


    /*
    Exception
         - 예외가 발생했을 때 대처하는 방법 
         - C언어는 예외처리 기술(high-level)이 없음. 
         - 반드시 예외처리 필요한 경우 : file, DB 사용시 
    
    */
    if(fp=NULL){
        printf("파일이 열리지 않았습니다. \n");
        return;                  // return value 없음 : 프로그램 종료 
    }
    printf("파일이 열렸습니다.\n"); 

    while(1){                   // fp주소로 가서 문자를 하나씩 읽어 (ASCII)반환하는 역할
    ch = fgetc(fp);         
        if(ch = EOF){           // EOF(NULL's ASCII ver.) : END OF FILE, Ctrl + z : EOF(Window)
            break;
        }
        putchar(ch);            // 입력한 문자 화면에 출력 
    }
    fclose(fp);                 // 이제 저 파일과 연결을 끊겠다.
}