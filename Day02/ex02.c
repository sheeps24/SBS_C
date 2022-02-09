


#include <stdio.h>

int main(void) {
    
    short sh = 32767 ;   // short 형의 최댓값으로 초기화    // + 1 ==> overflow 표현 할 수 있는 최솟값으로 돌아감
    int in = 2137483647;    // 약 21억의 최댓값을 담을 수 있다
    long ln = 2137483647;
    long long lln = 123451234512345;

    printf("sh : %d\n", sh);
    printf("in : %d\n", in);
    printf("ln : %ld\n", ln);
    printf("lln : %lld\n", lln);
    
    return 0;
}