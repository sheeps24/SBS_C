


#include <stdio.h>

int main(void){
   // 공약수?
   // : 두 정수의 공통된 약수
   // 12 , 18 공약수 1,2,3,6

   // 공배수

   // 최소공배수


   // 두 정수 입력
   int A,B ;
   int big,small;
   int gcd, lcm;
   int R;

   printf("정수 A, B 입력 :");
   scanf("%d %d", &A, &B);


   // 두 수의 크기 비교
   if (A>=B){
       big = A;
       small = B;
   }
    else {
        big = B;
        small = A;
    }

    while (1) {
        // 1. 큰 수를 작은 수로 나눈 나머지 --> 다음 작은 수
        R = big%small;
        // 2. 현재 작은 수                 --> 다음 큰 수
        big = small;
        small = R;

        if(R == 0){
           // 나머지가 0 일때, 큰 수 --> 최대공약수 
            gcd = big;
            // 최소공배수 = A * B / 최대 공약수
            lcm = A * B / gcd;
            break;
        }
    }

    printf("최대공약수 : %d\n",gcd);
    printf("최대공배수 : %d\n",lcm);
      

    return 0;
}