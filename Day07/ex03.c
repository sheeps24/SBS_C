


#include <stdio.h>

int main(void) {
    
    int num;

    // ���ѹݺ� : ������ ��(1)�� �ָ� ������ �ݺ��Ѵ�.
    do {
        printf(" 1.�ֹ��ϱ�, 2. ��ٱ���, 0. ����\n ");
        printf("�޴���ȣ : ");
        scanf("%d", &num);

        if (num ==1 )
            printf("�ֹ��Ϸ�\n");
        if (num ==2 )
            printf("��ٱ��� ���\n");

    } while(num != 0);

    printf("����\n");

    return 0;
}