


#include <stdio.h>

// ���� �Լ�
// : �Լ� �ܺο� ������ �Լ�
// - �Լ� ��/�ܺ� ��� �������� ���� ����
int X = 200;
int Y = 300;



// ��������
    // : �Լ� ���ο� ������ ����
    // - �Լ� ���ο����� ���� ����, �ܺο����� ���� �Ұ�
void sample(){
    printf(" X : %d\n", X);
    printf(" Y : %d\n", Y);

}


int main(void) {

    
    // A = 100; (���� �Ұ�)
    // printf(" A : %d", A);
    printf("main �Լ����� X,Y ����\n");
    printf(" X : %d\n", X);
    printf(" Y : %d\n", Y);


    printf("sample �Լ����� X,Y ����\n");
    sample();



    return 0;
}