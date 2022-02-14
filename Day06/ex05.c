



# include <stdio.h>

int main (void){

    int score = 0;
    char grade = 'F';
    printf("Á¡¼ö :");
    scanf("%d", &score);

    if (score >= 90 && score < 100){
        grade = 'A';
    }
    else if (score >= 80 ){
        grade = 'B';
    }
    else if (score >= 70 ){
        grade = 'C';
    }
    else if (score >= 60){
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("%c", grade);



    return 0 ;

}