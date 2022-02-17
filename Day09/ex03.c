


#include <stdio.h>

// void : 반환 타입이 없는 것을 의미
void coffe( int water, int coffe, int temp ){

    water *= 2;
    coffe -= 5;
    static int cup1 = 0;                 //static 없으면 지속 저장되지 않음
    int result = water + coffe + temp;

    cup1++;
    
    printf(" 커피는 %d 원 입니다\n", result);
    printf(" 커피의 개수는 %d 개 입니다\n", cup1);

}

void juice( int water, int fruit ){

    water *= 1.5;
    fruit += 10;
    static int cup2 = 0;
    int result =  water + fruit;
    
    cup2++;

    printf(" 주스는 %d 원 입니다\n", result);
    printf(" 주스의 개수는 %d 개 입니다\n", cup2);
}

int main(void) {

    // coffee( water, coffe, temp )

    // juice( water, fruit ) 

    coffe(30,20,90);
    juice(30,50);

    coffe(30,20,90);
    juice(30,50);

    // printf(" 커피는 %d 원 입니다", cup1);
    // printf(" 주스는 %d 원 입니다", cup2);
    
    return 0;
}