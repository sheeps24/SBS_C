


#include <stdio.h>


/*
        구조체 포인터
        : 포인터 변수가 가리키고 있는 주소값이 구조체인 포인터
*/

struct person {
    char name[30];
    int age;
};


int main(void) {

    Person boy = {"SBS", 30};

    Person *ptr = &boy;


    printf("%s : %d\n", (*ptr).name, (*ptr).age);
    printf("%s : %d\n", ptr->name, ptr->age);


    return 0;
}