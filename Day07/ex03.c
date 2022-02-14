


#include <stdio.h>

int main(void) {
    
    int num;

    // 무한반복 : 조건을 참(1)로 주면 무한히 반복한다.
    do {
        printf(" 1.주문하기, 2. 장바구니, 0. 종료\n ");
        printf("메뉴번호 : ");
        scanf("%d", &num);

        if (num ==1 )
            printf("주문완료\n");
        if (num ==2 )
            printf("장바구니 담김\n");

    } while(num != 0);

    printf("종료\n");

    return 0;
}