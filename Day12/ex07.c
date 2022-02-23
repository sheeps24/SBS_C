


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // 할당된 메모리 주소값을 저장할 포인터
    int *ptr;
     // 입력 포인터 개수
     int count = 0;
     // 할당 받은 메모리 크기
     int maxsize = 3;
     int num;

     // 메모리 동적 할당
     // calloc() 함수
     // : calloc(개수, 크기)
     // 

     ptr = (int *)calloc(maxsize, sizeof(int) );

     while(1){
         printf("정수 입력 (종료 : 0) : ");
         scanf("%d", &num);
         if (num == 0)
            break;


        // 메로리 공간 초과될 경우, 재할당을 통한 메모리 영역 확장
        if (count == maxsize){
            maxsize += maxsize;   // 3 + 3, 메모리 사이즈를 2배로
            // 메모리 재할당
            // : realloc(할당할 포이터, 재항당할 사이즈)
            ptr = (int*) realloc(ptr, maxsize * sizeof(int));
        }
        ptr[count++] = num;
     }

    for (int i = 0;i< count; i++ ){
        printf("%d ", ptr[i]);

    }
    printf("\n");

    if (ptr != NULL){
        // 메모리 공간 해제
        free(ptr);
    }
    return 0;
}