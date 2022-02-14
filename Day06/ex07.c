

#include <stdio.h>

int main(void) {
    
    int score;
    printf("Á¡¼ö :");
    scanf("%d", &score);

    switch (score) {
        case 100:
        case 90:
                    printf("A");
                    break;
        case 80:
        case 70:
                    printf("B");
                    break;
        case 60:
        case 50:
                    printf("C");
                    break;

        default:    printf("F");
                    break;
    }


    return 0;
}