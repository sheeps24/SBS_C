


#include <stdio.h>
// 짝수의 합계를 구하시오.
int main(void){
    int sum = 0;
    for (int i = 1; i <= 20; i++){

        // 홀수인 경우 처음으로감.
        if( i % 2 == 1 )
            continue;

        sum += i;

        printf("%d",i);
        if ( i == 20)
            printf("=");
        else
            printf("+");

    }

    printf("%d",sum);
    return 0;
}