



#include <stdio.h>

int main(void) {
        int a[8];
    int b[5];
    int c[5];
    

    for(int i = 0; i<=7; i++ ){
        printf("num%d : ", i+1);
        scanf("%d", &a[i]);

        if ( a[i] % 2 == 0)
            b[i] = a[i];
        
        
        else  
            c[i] = a[i];

        
        printf("%d\n", b[i]);
        printf("%d\n", c[i]);
       
    }




    return 0;
}





