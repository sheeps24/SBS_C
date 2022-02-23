

#include <stdio.h>
#include <stdlib.h>


// 구조체 : 다양한 자료형의 여러 데이터(변수)를 묵어서 저장하는 사용자 정의 타입
// 키워드 : struct


/*
     책정보
     - 제목 (문자열)
     - 저자 (문자열)
     - 가격 (정수) 



    * 구조체 선언 
    struct 구조체 이름 변수이름;
*/



// 구조체 정의 
struct person{
    // 이름, 나이
    char name[30];
    int age;
};



int main(void) {


// 구조체 정의 
struct person{
    // 이름, 나이
    char name[30];
    int age;
};

//  구조체 선언
struct person boy, girl;

// 멤버 접근 연산자(.)
// boy, girl의 name(이름)에 문자열을 복사

strcpy(boy.name, "김");
strcpy(girl.name, "이");

// boy, girl 의 나이
boy.age = 20;
girl.age = 20;

// 출력
printf("boy의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
printf("girl의 이름은 %s, 나이는 %d \n", girl.name, girl.age);



    return 0;
}