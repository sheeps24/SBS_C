



#include <stdio.h>




/* 
    typedef
    : 기존 자료형에 새로운 이름을 부여하는 키워드
    typedef 기존자료형 새로운 이름;

    ex) typedef int INT;

        typedef struct 구조체이름{

        } 새러운 이름


    구조체 선언

*/

// 구조체 정의와 동시에 typedef 선언
typedef struct {
    int x;
    int y;
}   POINT;

// 구조체 정의 
struct person {
    char name[30];
    int age;
};

typedef struct person PERSON;

int main(void) {

    POINT position = {30,40};

    PERSON p = {"김, 10"};

    printf("(x,y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);


    return 0;
}