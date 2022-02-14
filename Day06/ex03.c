




# include <stdio.h>

int main (void){

    int N;
    printf("정수를 입력해주세요 :");
    scanf("%d", &N);

    // 홀수 일때
    if (N%2 ==1 )
        printf("홀수\n");

    // 짝수 일때
    else
        printf("짝수\n");




    // N % 2 == 1 : 홀수
    // N % 2 == 0 : 짝수
    



      return 0 ;
}