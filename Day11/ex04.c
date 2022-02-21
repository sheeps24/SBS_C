

#include <stdio.h>

int main(void) {

    /*
        문자열과 포인터
        - 문자열의 표현
        : * 문자열의 ("") 큼ㄴ 따옴표로 나타낸다
          * 문자로 이루어진 배열에 분자열을 지정한다.
          * 문자열의 끝 : 널 문자로 표시

        ex) char greet[] = "Hello!";
            [H][e][l][l][o][!][\0]

        - 문자열 선언 
        1. 배열 기반 문자열 선언 
        char greet[] = "Hello!";
        - 요소의 값 변경 가능
        - 새로운 문자열 할당 불가 

    
        2. 포인터 기반 문자열 선언 
        char *greet = "Hello!";
        - 요소의 값 변경 불가
        - 새로운 문자열 할당 가능   
    */

   char str1[] = "Hello C~!";
   char *str2 = "Hello C~!";

   // 문자열 출력 형식문자 : %s
   printf("배열 기반 문자열 str[] \n");
   printf("%s \n", str1);

   
   printf("포인터 기반 문자열 str[] \n");
   printf("%s \n", str2);

   str1[6] = 'A';          // 요소 변경 가능
   // str1 = "Bye Bye~!";  //새로운 문자열 할당 불가

   // str2[6] = 'A';        //요소 변경 불가
   str2 = "Bye Bye~!";      // 새로운  요소 할당 가능

   printf("--- 변경 후 출력 ---\n");
   printf("%s \n",str1);
   printf("%s \n",str2);




    
    return 0;
}