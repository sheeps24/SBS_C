

#include <stdio.h>

//�Լ� ����
// : ���α׷� ��ܿ� ����� �Լ��� �����Ϸ��� �˷��ֵ��� �����ϴ°�
// - ��ȯŸ�� �Լ��� (�Ű�����);


int get_num(void);

// �Ű����� ���� �Լ�
int get_num(void){
    int num;

    printf("���� �Է� : ");
    scanf("%d", &num);

    return num;
}
int main(void) {

    int result;

    result =  get_num();
    printf(" ��ȯ�� : %d\n", result);

    return 0;
}

