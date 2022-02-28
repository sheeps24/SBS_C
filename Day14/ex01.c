



#include <stdio.h>

int main(void) {

    // 파일 열기
    FILE *fp;   //구조체 포인터 변수 선언
    char ch;

    // fopen("경로/파일이름", "모드");
    // - 모드 : w , r , a
    // - 파일 읽기 실패 : NULL 반환
    fp = fopen("test.txt", "r");
    if (fp ==NULL){
        printf("파일 읽기 실패\n");
        return 1;                     // 문제가 생길 경우 return 0; 이아닌 return 1;로 함.
    }

    // 텍스트 파일의 내용
    while(1){
        // fgetc() : 문자 입력 함수
        // - 파일에서 하나의 문자를 입력받아 반환하는 함수

        ch = fgetc(fp);
    // EDF : 파일의 마지막을 의미
        if( ch == EOF){
            break;
        }
        putchar(ch);        //문자 출력 함수
    }



    printf("파일 읽기 성공!\n");
    // 파일 닫기
    fclose(fp);
    return 0;
} 