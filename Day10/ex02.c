




#include <stdio.h>

int main(void){

    //포인터 연산하기
    int num = 10;
    // 포인터 변수 pnum은 num주소를 저장
    int *pnum = &num;

    printf(" 변경 전 *pnum : %d\n" , *pnum);


    *pnum = 20;                               // *pnum 이 아닌 num을 출력해도 값은 20이다.
    printf(" 변경 후 *pnum : %d\n", *pnum);   
    printf("num : %d\n", num);                // 지난 예제에서 *ptr = num이라 했다. 당연히 값이 공유된다.
                                          
    // 포인터 사용 이유
    // 1. 메모리를 제어해야하는 경우
    // 2. 동적 할당 및 메모리 접근을 시도하는 경우
    // 3. 자료구조 & 알고리즘 등의 코드를 작성하는 경우
    
    return 0;
}