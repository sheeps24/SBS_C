

#include <stdio.h>
#include <stdlib.h>


// ����ü : �پ��� �ڷ����� ���� ������(����)�� ��� �����ϴ� ����� ���� Ÿ��
// Ű���� : struct


/*
     å����
     - ���� (���ڿ�)
     - ���� (���ڿ�)
     - ���� (����) 



    * ����ü ���� 
    struct ����ü �̸� �����̸�;
*/



// ����ü ���� 
struct person{
    // �̸�, ����
    char name[30];
    int age;
};



int main(void) {


// ����ü ���� 
struct person{
    // �̸�, ����
    char name[30];
    int age;
};

//  ����ü ����
struct person boy, girl;

// ��� ���� ������(.)
// boy, girl�� name(�̸�)�� ���ڿ��� ����

strcpy(boy.name, "��");
strcpy(girl.name, "��");

// boy, girl �� ����
boy.age = 20;
girl.age = 20;

// ���
printf("boy�� �̸��� %s, ���̴� %d \n", boy.name, boy.age);
printf("girl�� �̸��� %s, ���̴� %d \n", girl.name, girl.age);



    return 0;
}