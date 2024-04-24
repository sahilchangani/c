#include<stdio.h>
 main(){
int num;
printf("Enter The Number: ");
scanf("%d",&num);

switch (num>0)
{
case 1:
   printf("Positive Number:");
    break;

default:
printf("Constant Number:");
    break;
}
  
}