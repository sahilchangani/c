#include<stdio.h>
main(){
    int i=2,j;
    printf("Enter Any Number:");
            scanf("%d",&j);
    do
    {
        printf("%d\n",i);        
        i+=2;
    } while (i<=j);
    
}