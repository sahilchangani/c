#include<stdio.h>
main(){
    int num;
    printf("Enter Any Number :");
    scanf("%d",&num);

    if (num % 4 == 0)
    {
        printf("This Is Leap year");
    }
    else
    {
        printf("This Is Not a leap year");
    }
    
    
}