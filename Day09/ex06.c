

#include <stdio.h>

// �Լ� ����
// ��ȯ Ÿ�԰� �Ű����� ��� ���� �Լ� 
void print_line();





int main(void) {
    
    print_line();
    printf("�й�\t�̸�\t����\t\n");
    printf("0348\t�ڻ��\t�κ�\t\n");
    print_line();
    
    return 0;
}


//�Լ� ���� 
void print_line(void){
    int i;
    for (int i = 0; i < 50; i++){
        printf("-");
    }
    printf("\n");
}