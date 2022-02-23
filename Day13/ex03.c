


/*
    구조체 배열
    : 배여ㅑㄹ의 요소가 구조체로 이루어진 배열

    * 배열 : 같은 자료형인 여러개의 데이터를 저장하는 변수
*/

#include <stdio.h>

int main(void) {

    // 구조체 배열 선언
    struct person boy[5] = {
        {"김코딩", 20},
        {"이코딩", 20},
        {"박코딩", 20},
        {"곽코딩", 20},
        {"공코딩", 20}
    };

    // 구조체 배열 선언
    struct person girl[5];
    strcpy( girl[0].name, "이코인");
    strcpy( girl[0].name, "김코인");
    strcpy( girl[0].name, "류코인");
    strcpy( girl[0].name, "정코인");
    strcpy( girl[0].name, "승코인");


    girl[0].age = 12;
    girl[1].age = 14;
    girl[2].age = 16;
    girl[3].age = 18;
    girl[4].age = 20;


    // 출력
    for (int i = 0; i < 5; i++){
    printf("boy의 이름은 %s, 나이는 %d \n", boy[i].name, boy[i].age);
    printf("girl의 이름은 %s, 나이는 %d \n", girl[i].name, girl[i].age);
    
    }

    return 0;
}