


#include <stdio.h>

int main(void) {

    char str[50];

    printf("문자열을 입력 :");
    scanf("%s", str);     // &를 붙이지 않음
    // 이유는?
    // 배열의 이름 (str) =  배열의 주소값

    
    printf("입력 받은 문자열 : %s\n", str);
    printf("배열의 주소값 (배열의이름) : %p\n", str);
    printf("배열의 주소값 (주소연산자) : %p\n", &str[0]);    //결과 같음.

    
    return 0;
}