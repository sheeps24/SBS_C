




#include <stdio.h>

int main(void){

    //������ �����ϱ�
    int num = 10;
    // ������ ���� pnum�� num�ּҸ� ����
    int *pnum = &num;

    printf(" ���� �� *pnum : %d\n" , *pnum);


    *pnum = 20;                               // *pnum �� �ƴ� num�� ����ص� ���� 20�̴�.
    printf(" ���� �� *pnum : %d\n", *pnum);   
    printf("num : %d\n", num);                // ���� �������� *ptr = num�̶� �ߴ�. �翬�� ���� �����ȴ�.
                                          
    // ������ ��� ����
    // 1. �޸𸮸� �����ؾ��ϴ� ���
    // 2. ���� �Ҵ� �� �޸� ������ �õ��ϴ� ���
    // 3. �ڷᱸ�� & �˰��� ���� �ڵ带 �ۼ��ϴ� ���
    
    return 0;
}