


#include <stdio.h>

// ���� �Լ�
// : �Լ� �ܺο� ������ �Լ�
// - �Լ� ��/�ܺ� ��� �������� ���� ����
int X = 200;
int Y = 300;



// ��������
    // : �Լ� ���ο� ������ ����
    // - �Լ� ���ο����� ���� ����, �ܺο����� ���� �Ұ�
void sample(void){                  // ()�� void�� ������ �ٲ�� ����? 
    int x = 200;
    int y = 300;
    printf(" x : %d\n", x);
    printf(" y : %d\n", y);

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