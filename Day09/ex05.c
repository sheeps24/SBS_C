



#include <stdio.h>

// �Լ� ����
void printf_char( char ch, int count );               // �ȳ��̶� ���� ���� ������ char�� �ƴ� int�� !
                                                      // char�� 1byte�� ���ĺ��� �׷���.  + �ѱ��� 4byte �̻� 

int main(void) {


    printf_char('A',5);
    
    return 0;
}

// ��ȯ Ÿ���� �״� �Լ�
// �Է� ���� ���� ch�� count�� ����ϴ� �Լ�

void printf_char( char ch, int count ){
    int i;

    for (int i = 0; i < count; i++){
        printf("%c", ch);  
    }                    // ch�� ����'��'�� �ƴϱ⿡ %s�� �ȵȴ�. (����)
    // ��ȯŸ���� ���� ��,
    // return �� ������� �ʾƵ� �ȴ�.
}