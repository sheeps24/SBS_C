


#include <stdio.h>

int main(void) {
    // 문자열 변수 표현
    // - 배열의 문자열 저장
    // '' (작은 따옴표)   : 한 문자
    // "" (큰 따옴표)     : 문자열 

    char greet[] = "Hello, C!";
    printf("문자열의 내용 : %s\n", greet);

    // sizeof() 함수
    // : 해당 뱐수의 byte 단위의 크기를 반환
    printf("문자열의 크기 : %d\n", sizeof(greet));

    // 널문자
    // \0     : 문자열의 마지막에 삽입되는 문자
    // 의미   : 데이터 없음, 믄자열의 끝을 구분

    char mind[30] = "I love Programming!";
    printf("%s\n", mind);

    // "p"를 '\0'으로 대체
    mind[7] = '\0';
    printf("%s\n", mind);    // 8번째에 \0 삽입

    mind[1] = '\0';
    printf("%s\n", mind);       


    return 0;
}





