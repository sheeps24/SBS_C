


#include <stdio.h>

int main(void) {

    /*
        EOF( End Of File)
        : 텍스트 파일의 끝을 표현하기 위해 사용

        getchar() 입력 함수가 EOF 반환하는 경우
        1. 함수 호출 실패 : 읽어들일 데이터가 없을 경우
        2. ctrl + Z 을 할 경우 

        EOF : 입력 함수에 대해서 문자 입력을 종료하느 의미
    */

   char ch;
   while(1){
       ch = getchar();

        if (ch == EOF)
            break;

        putchar(ch);
   }
    
    return 0;
}