

#include <stdio.h>

void func(int a, int b){
    a = 100;
    b = 200;
}



int main(void) {

    int a =10, b =20;
    printf(" func() 함수 호출 전\n");
    printf(" a : %d, b : %d\n", a,b);

    // 값에 의한 전달
    // 변수가 가진 값을 복사하여 매개변수로 전달 

    func(a,b);    // 얜 장식이다. 결국 func() 함수를 출력한 적이 없는 것이다.

    printf(" func() 함수호출\n");
    printf(" a : %d, b : %d\n", a,b);   
    return 0;
}