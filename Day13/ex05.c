


#include <stdio.h>


/*
        ����ü ������
        : ������ ������ ����Ű�� �ִ� �ּҰ��� ����ü�� ������
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