


#include <stdio.h>
#include <stdlib.h>


// 입력 받은 문자열을 메모리를 동적 할당하여
// 저장한뒤 출력하고, 해제하는 프로그램 작성

char * getString(void){
    char *str = (char*)malloc(sizeof(char) * 100);
    printf("내가 좋아하는 색 : ");
    gets(str);               // 문자열의 입력받은 함수
    return str;
}



int main(void) {
    
    // 문자열 입력 함수 정의 : getString()
    char * result = getString();
    printf("내가 좋아하는 색은? %s \n", result);


    // NULL : 데이터가 없다
    if (result != NULL )
        free(result);            // 할당받은 메모리 해제



    return 0;
}