


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // �Ҵ�� �޸� �ּҰ��� ������ ������
    int *ptr;
     // �Է� ������ ����
     int count = 0;
     // �Ҵ� ���� �޸� ũ��
     int maxsize = 3;
     int num;

     // �޸� ���� �Ҵ�
     // calloc() �Լ�
     // : calloc(����, ũ��)
     // 

     ptr = (int *)calloc(maxsize, sizeof(int) );

     while(1){
         printf("���� �Է� (���� : 0) : ");
         scanf("%d", &num);
         if (num == 0)
            break;


        // �޷θ� ���� �ʰ��� ���, ���Ҵ��� ���� �޸� ���� Ȯ��
        if (count == maxsize){
            maxsize += maxsize;   // 3 + 3, �޸� ����� 2���
            // �޸� ���Ҵ�
            // : realloc(�Ҵ��� ������, ���״��� ������)
            ptr = (int*) realloc(ptr, maxsize * sizeof(int));
        }
        ptr[count++] = num;
     }

    for (int i = 0;i< count; i++ ){
        printf("%d ", ptr[i]);

    }
    printf("\n");

    if (ptr != NULL){
        // �޸� ���� ����
        free(ptr);
    }
    return 0;
}