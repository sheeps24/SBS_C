




#include <stdio.h>

int main(void) {

    FILE *fp;
    char str[30];
    
    
    printf("�Է� : ");
    gets(str);                     // puts() --> printf() ����, gets()�� scanf()��?
    int i;


    fp = fopen("output.txt", "w");
    if (fp == NULL){
        printf("���� ���� ����!\n");
        return 1;
    }

    i = 0;
    while( str[i] != '\0'){
        // fputc(����, ���� ������);
        // : �� ���ڸ� ���Ϸ� ����ϴ� �Լ�
        // - ��� ���� : ��µ� �� ���ڸ� ��ȯ
        // - ���� : EOF�� ��ȯ
        fputc(str[i], fp);      // ���ڸ� ���Ͽ� ���
        i++;

    }

    fputc('\n', fp);        // �ٹٲ�
    fclose(fp);             // ���� �ݱ�


    return 0;
}


