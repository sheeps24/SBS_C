


#include <stdio.h>

//�Լ� ����
double plu(double a, double b); 
double min(double a, double b); 
double mul(double a, double b); 
double div(double a, double b);


int main(void) {
    
    // double �� ��/��½� %lf ���
    double a,b;
    
    printf("a :");
    scanf("%lf", &a);

    printf("b :");
    scanf("%lf", &b);


    printf(" a + b = %lf\n", plu(a,b));
    printf(" a - b = %lf\n", min(a,b));
    printf(" a * b = %lf\n", mul(a,b));
    printf(" a / b = %lf\n", div(a,b));
     
    
    return 0;
}


double plu(double a, double b){
    double result = a + b;
    return result;
}

double min(double a, double b){
    double result = a - b;
    return result;
}

double mul(double a, double b){
    double result = a * b;
    return result;
}

double div(double a, double b){
    double result = a / b;
    return result;
}


    