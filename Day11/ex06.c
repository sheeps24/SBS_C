


#include <stdio.h>

int main(void) {

    /*
        EOF( End Of File)
        : �ؽ�Ʈ ������ ���� ǥ���ϱ� ���� ���

        getchar() �Է� �Լ��� EOF ��ȯ�ϴ� ���
        1. �Լ� ȣ�� ���� : �о���� �����Ͱ� ���� ���
        2. ctrl + Z �� �� ��� 

        EOF : �Է� �Լ��� ���ؼ� ���� �Է��� �����ϴ� �ǹ�
    */

   char ch;
   while(1){
       ch = getchar();

        if (ch == EOF)
            break;

        putchar(ch);
   }
    
    return 0;
}