#include<stdio.h>
main(){
    int i,j=1;

    printf("Enter Any Number:");
    scanf("%d",&i);

    while (i>=j)
    {
        if (i % 2 != 0)
        {
            printf("this is Odd NUmber %d\n",i);
        }      
        i--;
    }
    
}