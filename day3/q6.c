#include<stdio.h>
main(){
    int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the value of a :%d \n",a);
    printf("the value of b : %d",b);
}