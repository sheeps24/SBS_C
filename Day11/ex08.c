



#include <stdio.h>
#include <string.h>

int main(void) {

    // 1. 배열 포인터와 포인터 배열의 차이
    // 2. 문자열 저장과 배열 저장의 차이
    // 3. scanf가 있음에도 get,put,eof를 사용하는 이유.
    // 4. get,gets등 다를게 없다.

/*


*/
    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // 각 문자열의 길이
    printf("str1의 길이 : %d\n", strlen(str1));
    printf("str2의 길이 : %d\n", strlen(str2));

    // str1을 str3에 복사하기
    strcpy(str3, str1);

    //str1의 내용 중 5글자만 str2에 복사하가
    strncpy(str2,str1,5);

    printf("str1 : %s\n", str1); 
    printf("str2 : %s\n", str2); 
    printf("str3 : %s\n", str3); 


    return 0;
}