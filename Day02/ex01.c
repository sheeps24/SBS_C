


#include <stdio.h>

int main(void) {

    // ���� �ڷ��� 
    // bit            : 0,1���� �ڷḦ ��Ÿ���� �⺻ ���� 
    // 1byte 8bits   
    // char           : 1byte = 8bits
    // short          : 2byte
    // int            : 4byte
    // long           : 4byte
    // long long      : 8byte
    //  ----
    

    char ch1 = 'A';
    char ch2 = 65;

    // % ? : ���Ĺ���
    // %c : ���ڸ� ǥ���ϴ� ���Ĺ���
    // %d : ������ ǥ���ϴ� ���Ĺ���

    
    printf("���� %c �ƽ�Ű �ڵ� �� : %d \n ", ch1, ch2);
    // �� �� ���� : alt + shift + �Ʒ�����Ű
    printf("�ƽ�Ű �ڵ� ���� %d �� ���� : %c \n ", ch1, ch2);


    return 0;
}