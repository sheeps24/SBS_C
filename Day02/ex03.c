


#include <stdio.h>

int main(void) {
    
    // 실수형
    float ft = 1.23456789;
    double db = 10.123456789;

    printf("float 형 실수값 : %.10f \n ", ft);
    printf("double 형 실수값 : %.10f \n ", db);

    // 컴퓨터에서는 실수 표현의 오차가 존재
    // 유효 숫자 범위안레서 입력해야함
    // float 형 실수형의 유효숫자 : 소수점 아래 7자리 까지
    // double 형 실수형의 유효숫자 : 소수점 아래 15자리 까지  

    
    return 0;
}