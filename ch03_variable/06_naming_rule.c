/*
명명규칙(Naming Rule)
 1. 알파벳 대문자(A to Z), 소문자(a to z), 숫자(0 to 9), 특수문자(_)만 사용 가능
 2. 숫자로 시작 불가 
     ex) 1ABC, ABC1 (X)
 3. 대문자와 소문자는 다르게 인식
     ex) ABC != Abc != abc
 4. 예약어 사용 불가
     ex) 예약어는 프로그래밍 언어에서 이미 사용하고 있는 키워드
      main, printf, sizeof

 ※ 네이밍 케이스(합성어 표현)
     ex) student + number

     C : Class(객체)
     M : Method(함수)
     V : Variable(변수)

     1. pascal 케이스    → Age, StudentNumber  : 첫 글자 대문자, 합성어조차도.
         - Python, JAVA 객체 : C
     2. camel 케이스     → age, studentNumber  : 첫 글자 소문자, 합성어조차도..
         - C, JAVA : V, M, JSON
     3. snake 케이스     → age, student_number : 전체 소문자 
         - Python : V, M
     4. kebab 케이스     → age, student-number : 언더바 대신 하이픈 
         - Web design(HTML, CSS)

 JAVA ex
 StudentNumber   : C
 studentNumber() : M
 studentNumber   : V
 */