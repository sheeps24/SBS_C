


/*
    ����ü �迭
    : �迩������ ��Ұ� ����ü�� �̷���� �迭

    * �迭 : ���� �ڷ����� �������� �����͸� �����ϴ� ����
*/

#include <stdio.h>

int main(void) {

    // ����ü �迭 ����
    struct person boy[5] = {
        {"���ڵ�", 20},
        {"���ڵ�", 20},
        {"���ڵ�", 20},
        {"���ڵ�", 20},
        {"���ڵ�", 20}
    };

    // ����ü �迭 ����
    struct person girl[5];
    strcpy( girl[0].name, "������");
    strcpy( girl[0].name, "������");
    strcpy( girl[0].name, "������");
    strcpy( girl[0].name, "������");
    strcpy( girl[0].name, "������");


    girl[0].age = 12;
    girl[1].age = 14;
    girl[2].age = 16;
    girl[3].age = 18;
    girl[4].age = 20;


    // ���
    for (int i = 0; i < 5; i++){
    printf("boy�� �̸��� %s, ���̴� %d \n", boy[i].name, boy[i].age);
    printf("girl�� �̸��� %s, ���̴� %d \n", girl[i].name, girl[i].age);
    
    }

    return 0;
}