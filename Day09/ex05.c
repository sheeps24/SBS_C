



#include <stdio.h>

// 함수 선언
void printf_char( char ch, int count );


int main(void) {


    printf_char('A',5);
    
    return 0;
}

// 반환 타입이 앖는 함수
// 입력 받은 문자 ch를 count번 출력하는 함수

void printf_char( char ch, int count ){
    int i;

    for (int i = 0; i < count; i++){
        printf("%c", ch);  
    }                    // ch는 문자'열'이 아니기에 %s는 안된다. (오류)
    // 반환타입이 없을 때,
    // return 을 사용하지 않아도 된다.
}