




#include <stdio.h>

int main(void) {

    FILE *fp;
    char str[30];
    
    
    printf("입력 : ");
    gets(str);                     // puts() --> printf() 가능, gets()도 scanf()로?
    int i;


    fp = fopen("output.txt", "w");
    if (fp == NULL){
        printf("파일 생성 실패!\n");
        return 1;
    }

    i = 0;
    while( str[i] != '\0'){
        // fputc(문자, 파일 포인터);
        // : 한 문자를 파일로 출력하는 함수
        // - 출력 성공 : 출력된 한 문자를 반환
        // - 실패 : EOF를 반환
        fputc(str[i], fp);      // 문자를 파일에 출력
        i++;

    }

    fputc('\n', fp);        // 줄바꿈
    fclose(fp);             // 파일 닫기


    return 0;
}


