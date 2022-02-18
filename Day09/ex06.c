

#include <stdio.h>

// 함수 선언
// 반환 타입과 매개변수 모두 없는 함수 
void print_line();





int main(void) {
    
    print_line();
    printf("학번\t이름\t전공\t\n");
    printf("0348\t박상우\t로봇\t\n");
    print_line();
    
    return 0;
}


//함수 정의 
void print_line(void){
    int i;
    for (int i = 0; i < 50; i++){
        printf("-");
    }
    printf("\n");
}