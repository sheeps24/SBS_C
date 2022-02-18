

#include <stdio.h>

void func(int *a, int *b){
    *a = 100;
    *b = 200;
}



int main(void) {

    int a =10 , b = 20;
    printf("func 함수 호출 전\n");
    printf("a : %d, b : %d\n", a,b);

    // 참조에 의한 전달
    // : 변수의 값을 전달하는 것이 아닌,
    //   해당 변수에 접근할 수 있는 주소값을 전달

    func(&a, &b);            // 함수의 인수에 &를 붙여 func()의 매개변수에 입력하면, 
                             // int *a = & a(main함수), int *b = & b(main함수)로 해석된다.
    
    printf("func 함수 호출 후\n");
    printf("a : %d, b : %d\n", a,b);
    
    return 0;

}


// pyton의 self와 c의 static의 차이 물어보기.