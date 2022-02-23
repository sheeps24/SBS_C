


#include <stdio.h>


// 1. 반환값 X , 매개변수 X
void func1(void){
    printf("반환값 x, 매개변수 X\n");
}

// 2. 반환값 0 , 매개변수 X
int func2(void){
    //반환값이 있을때, 
    // 반드시 return 작성
    printf("반환값 0 , 매개변수 X\n");
    return 100;
}
// 3. 반환값 X , 매개변수 0
void func3(int a, int b){
    printf("반환값 X , 매개변수 0\n");
    printf("a + b = %d", a +b );
}

// 4. 반환값 0 , 매개변수 0
int func4(int a, int b){
    int sum = a + b;
    printf("반환값 0 , 매개변수 0\n");
    return sum;
}


int main(void) {

    //함수 호출
    // : 함수를 실행하도록 요청하는 명령
    // 1.
    func1();

    // 2.
    int result1 = func2();

    // 3.
    func3(10,20);

    // 4. 
    int result2 = func4(3,4);


    printf("%d\n",result1);
    printf("%d\n",result2);






    return 0;
}