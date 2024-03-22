#include<stdio.h>

void main(){

    for (int i = 5; i >=1; i--)
    {
        for (int k = 5; k >=5-i; k--)
        {
            printf(" ");
        }
        
        for (int j = i; j <=5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}