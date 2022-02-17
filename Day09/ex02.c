


#include <stdio.h>

// 전역 함수
// : 함수 외부에 선언한 함수
// - 함수 내/외부 모든 영역에서 접근 가능
int X = 200;
int Y = 300;



// 지역변수
    // : 함수 내부에 선언한 변수
    // - 함수 내부에서만 접근 가능, 외부에서는 접근 불가
void sample(){
    printf(" X : %d\n", X);
    printf(" Y : %d\n", Y);

}


int main(void) {

    
    // A = 100; (접근 불가)
    // printf(" A : %d", A);
    printf("main 함수에서 X,Y 접근\n");
    printf(" X : %d\n", X);
    printf(" Y : %d\n", Y);


    printf("sample 함수에서 X,Y 접근\n");
    sample();



    return 0;
}