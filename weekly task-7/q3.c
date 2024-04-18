#include<stdio.h>
main(){
    int a,b,c,large;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("enter third number :");
    scanf("%d",&c);

if (a>b && a>c)
{
large=a;
}
else if (b>a && b>c)
{
    large=b;
}
else
{
    large=c;
}
printf("The maximum number is : %d",large);


}