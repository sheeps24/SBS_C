

#include <stdio.h>

void func(int *a, int *b){
    *a = 100;
    *b = 200;
}



int main(void) {

    int a =10 , b = 20;
    printf("func �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a,b);

    // ������ ���� ����
    // : ������ ���� �����ϴ� ���� �ƴ�,
    //   �ش� ������ ������ �� �ִ� �ּҰ��� ����

    func(&a, &b);            // �Լ��� �μ��� &�� �ٿ� func()�� �Ű������� �Է��ϸ�, 
                             // int *a = & a(main�Լ�), int *b = & b(main�Լ�)�� �ؼ��ȴ�.
    
    printf("func �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a,b);
    
    return 0;

}


// pyton�� self�� c�� static�� ���� �����.