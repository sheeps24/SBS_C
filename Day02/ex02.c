


#include <stdio.h>

int main(void) {
    
  short sh = 32767 ;   // short ���� �ִ����� �ʱ�ȭ    // + 1 ==> overflow ǥ�� �� �� �ִ� �ּڰ����� ���ư�
    int in = 2137483647;    // �� 21���� �ִ��� ���� �� �ִ�
    long ln = 2137483647;
    long long lln = 123451234512345;

    printf("sh : %d\n", sh);
    printf("in : %d\n", in);
    printf("ln : %ld\n", ln);
    printf("lln : %lld\n", lln);
    
    return 0;
}