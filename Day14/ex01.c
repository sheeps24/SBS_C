



#include <stdio.h>

int main(void) {

    // ���� ����
    FILE *fp;   //����ü ������ ���� ����
    char ch;

    // fopen("���/�����̸�", "���");
    // - ��� : w , r , a
    // - ���� �б� ���� : NULL ��ȯ
    fp = fopen("test.txt", "r");
    if (fp ==NULL){
        printf("���� �б� ����\n");
        return 1;                     // ������ ���� ��� return 0; �̾ƴ� return 1;�� ��.
    }

    // �ؽ�Ʈ ������ ����
    while(1){
        // fgetc() : ���� �Է� �Լ�
        // - ���Ͽ��� �ϳ��� ���ڸ� �Է¹޾� ��ȯ�ϴ� �Լ�

        ch = fgetc(fp);
    // EDF : ������ �������� �ǹ�
        if( ch == EOF){
            break;
        }
        putchar(ch);        //���� ��� �Լ�
    }



    printf("���� �б� ����!\n");
    // ���� �ݱ�
    fclose(fp);
    return 0;
} 