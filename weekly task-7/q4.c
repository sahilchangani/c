#include<stdio.h>
main(){
    int n;
    printf("Enter any Number :");
    scanf("%d",&n);

    if (n % 4 == 0)
    {
        printf("this is leap year");
    }
    else
    {
        printf("this is not leap year");
    }
    
}