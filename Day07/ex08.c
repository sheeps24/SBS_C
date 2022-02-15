

#include <stdio.h>
// 짝수의 합계를 구하시오.
int main(void){
   
   // 약수? 
   // : 어떤 수보다 작거나 같은수로 나눌때,
   // 나누나머지가 0이 되는 수
   // 6의 약수 : 1,2,3,6

   int input;
   printf("정수 입력 : ");
   scanf("%d", &input);

    printf("%d의 약수 : ", input);

    // 입력받은 정수의 약수를 구하여 순서대로 출력해라
    // 1. 입력받은 값보다 작거나 같은 수글을 반복
    // 2. (입력값% 반복변수 == 0) 조건을 만족 시 
    //  반복변수 --> 약수

    for (int v = 1; v <= input; v++) {
        // 약수
        if ( input % v == 0)
            printf("%d", v);



    }
    printf("\n");
    return 0;
}