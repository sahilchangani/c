#include<stdio.h>
main(){
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf(" ");
        }
        for (int k = 1  ; k <= 4; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}