


# include <stdio.h>

int main (void){

    int score = 0;
    char grade = 'F';
    printf("Á¡¼ö :");
    scanf("%d", &score);

    if (score >= 90 && score < 100){
        grade = 'A';
    }
    if (score >= 80 && score < 90){
        grade = 'B';
    }
    if (score >= 70 && score < 80){
        grade = 'C';
    }
    if (score >= 60 && score < 70){
        grade = 'D';
    }
    if (score < 60 ){
        grade = 'F';
    }

    printf("%c", grade);



    return 0 ;
}