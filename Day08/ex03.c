


#include <stdio.h>

int main(void) {
    // ���ڿ� ���� ǥ��
    // - �迭�� ���ڿ� ����
    // '' (���� ����ǥ)   : �� ����
    // "" (ū ����ǥ)     : ���ڿ� 

    char greet[] = "Hello, C!";
    printf("���ڿ��� ���� : %s\n", greet);

    // sizeof() �Լ�
    // : �ش� ������ byte ������ ũ�⸦ ��ȯ
    printf("���ڿ��� ũ�� : %d\n", sizeof(greet));

    // �ι���
    // \0     : ���ڿ��� �������� ���ԵǴ� ����
    // �ǹ�   : ������ ����, ���ڿ��� ���� ����

    char mind[30] = "I love Programming!";
    printf("%s\n", mind);

    // "p"�� '\0'���� ��ü
    mind[7] = '\0';
    printf("%s\n", mind);    // 8��°�� \0 ����

    mind[1] = '\0';
    printf("%s\n", mind);       


    return 0;
}





