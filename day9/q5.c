#include<stdio.h>
void main(){
    int i,j;
    printf("enter the first number:");
    scanf("%d",&i);
    printf("enter the last number:");
    scanf("%d",&j);

    while (i<=j)
    {
       if (i%4==0)
       {
        printf("%d\n",i);
       }
       i++;
       
    }
    
}
