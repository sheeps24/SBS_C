


#include <stdio.h>

int main(void) {

    // 정수 자료형 
    // bit            : 0,1으로 자료를 나타내는 기본 단위 
    // 1byte 8bits   
    // char           : 1byte = 8bits
    // short          : 2byte
    // int            : 4byte
    // long           : 4byte
    // long long      : 8byte
    //  ----
    

    char ch1 = 'A';
    char ch2 = 65;

    // % ? : 형식문자
    // %c : 문자를 표시하는 형식문자
    // %d : 정수를 표시하는 형식문자

    
    printf("문자 %c 아스키 코드 값 : %d \n ", ch1, ch2);
    // 한 줄 복사 : alt + shift + 아래방향키
    printf("아스키 코드 값이 %d 인 문자 : %c \n ", ch1, ch2);


    return 0;
}