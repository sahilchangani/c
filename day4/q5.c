#include<stdio.h>
main(){
     int  p,r,n,i;
     printf("Principal is:");
     scanf("%d",&p);
         printf("rate is:");
     scanf("%d",&r);
     printf("time is:");
     scanf("%d",&n);
     i=p*r*n;
     printf("rate of intrest is: %d", i/100);
}