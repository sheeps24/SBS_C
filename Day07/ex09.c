


#include <stdio.h>

int main(void){
   // �����?
   // : �� ������ ����� ���
   // 12 , 18 ����� 1,2,3,6

   // �����

   // �ּҰ����


   // �� ���� �Է�
   int A,B ;
   int big,small;
   int gcd, lcm;
   int R;

   printf("���� A, B �Է� :");
   scanf("%d %d", &A, &B);


   // �� ���� ũ�� ��
   if (A>=B){
       big = A;
       small = B;
   }
    else {
        big = B;
        small = A;
    }

    while (1) {
        // 1. ū ���� ���� ���� ���� ������ --> ���� ���� ��
        R = big%small;
        // 2. ���� ���� ��                 --> ���� ū ��
        big = small;
        small = R;

        if(R == 0){
           // �������� 0 �϶�, ū �� --> �ִ����� 
            gcd = big;
            // �ּҰ���� = A * B / �ִ� �����
            lcm = A * B / gcd;
            break;
        }
    }

    printf("�ִ����� : %d\n",gcd);
    printf("�ִ����� : %d\n",lcm);
      

    return 0;
}