


#include <stdio.h>


// 1. ��ȯ�� X , �Ű����� X
void func1(void){
    printf("��ȯ�� x, �Ű����� X\n");
}

// 2. ��ȯ�� 0 , �Ű����� X
void func2(void){
    //��ȯ���� ������, 
    // �ݵ�� return �ۼ�
    printf("��ȯ�� 0 , �Ű����� X");
    return 100;
}
// 3. ��ȯ�� X , �Ű����� 0
void func3(int a, int b){
    printf("��ȯ�� X , �Ű����� 0\n");
    printf(" a + b = %d", a +b );
}

// 4. ��ȯ�� 0 , �Ű����� 0
void func4(int a, int b){
    int sum = a + b;
    printf("��ȯ�� 0 , �Ű����� 0\n");
    return sum;
}


int main(void) {

    //�Լ� ȣ��
    // : �Լ��� �����ϵ��� ��û�ϴ� ���
    // 1.
    func1();

    // 2.
    int result1 = func2();

    // 3.
    func3(10,20);

    // 4. 
    int result2 = func4();


    printf("%d",result1);
    printf("%d",result2);






    return 0;
}