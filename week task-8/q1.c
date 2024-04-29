#include<stdio.h>
main(){

    int n;
    int sum=0;
    
    printf("Enter Any Number:");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
        printf("%d %d",n,sum);
    

}