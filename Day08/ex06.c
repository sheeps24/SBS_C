
// .............¹®Á¦

#include <stdio.h>

int main(void) {

    int M,N ;
    printf("M : ");
    scanf("%d", &M);

    printf("N : ");
    scanf("%d", &N);

    int arr[M][N];
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &arr[i][j]);

        }
        
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
    
    return 0;
}