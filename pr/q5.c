#include<stdio.h>
main(){
    for (int i = 5; i >=1; i--)
    {
        for (int j = 4; j >=i; j--)
        {
            printf(" ");
        }
        for (int k = 1  ; k <= i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    for (int i = 1; i <=4; i++)
    {
        for (int j = 4; j >=i; j--)
        {
            printf(" ");
        }
        for (int k = 1  ; k <= i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
}