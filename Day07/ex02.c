



#include <stdio.h>

int main(void) {
    
    int num;

    // 무한반복 : 조건을 참(1)로 주면 무한히 반복한다.
    while(1) {
        printf(" 1.주문하기, 2. 장바구니, 0. 종료\n ");
        printf("메뉴번호 : ");
        scanf("%d", &num);

        if (num ==1 )
            printf("주문완료\n");
        if (num ==2 )
            printf("장바구니 담김\n");

        //종료 조건
        if (num ==0 )
        printf("종료\n");
        break;
        // break : 현재 속한 조건문, 반복문을 벗어나는 명령 
    }

    return 0;
}
