



#include <stdio.h>
#include <string.h>

int main(void) {

    // 1. �迭 �����Ϳ� ������ �迭�� ����
    // 2. ���ڿ� ����� �迭 ������ ����
    // 3. scanf�� �������� get,put,eof�� ����ϴ� ����.
    // 4. get,gets�� �ٸ��� ����.

/*


*/
    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // �� ���ڿ��� ����
    printf("str1�� ���� : %d\n", strlen(str1));
    printf("str2�� ���� : %d\n", strlen(str2));

    // str1�� str3�� �����ϱ�
    strcpy(str3, str1);

    //str1�� ���� �� 5���ڸ� str2�� �����ϰ�
    strncpy(str2,str1,5);

    printf("str1 : %s\n", str1); 
    printf("str2 : %s\n", str2); 
    printf("str3 : %s\n", str3); 


    return 0;
}