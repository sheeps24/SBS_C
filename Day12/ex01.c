




// �޸�?
// : ��ǻ�Ͱ� ���� �� ���α׷� ������ ���� ����ϴ� ����
// - ���α׷��� ����Ƿ���, ������ �Լ����� �޸𸮰ϰ��� �Ҵ� �Ǿ���Ѵ�.
// -Lord(�ε�)        : �ʿ��� �����͵��� �޸𸮿� �������� ��
//                        (Loarding....)

/*
    # �޸� ����
    1. �ڵ� ����       : ���α׷��� �ڵ尡 ����Ǵ� ����

    2. ������ ����     : ���� ����, ���� ������ ����Ǵ� ����
                        - �Ҵ� �Ⱓ : ���α׷� ���� ~ ����

    3. ���� ����       : ���� ����, �Ű� ������ ����Ǵ� ����
                        - �Ҵ� �Ⱓ : �Լ� ȣ�� ~ �Լ� ����

    4. �� ����         : ����ڰ� ���� �����ϴ� ����
                        - �޸� ���� �Ҵ�
                        : �ڵ带 ���ؼ� �޸𸮸� �Ҵ� �� ������ �� �ִ�.
*/
#include <stdio.h>

int N = 10;    // ���� ����


// ����� ���� �Լ�
int sum(int a,int b){
    int result = a + b;
    printf(" sum ()���� N : %d\n ", N);
    return result;
}



//���� �Լ�
// : ���α׷� ���� ��, ���� ���� ����Ǵ� �Լ� 
int main(void) {

    // ���� ����
    int x =10;
    int y =20;
    int result = sum(x,y);


    printf("main ()���� N : %d\n ", N);
    printf("�հ� : %d\n", result);

    return 0;
}