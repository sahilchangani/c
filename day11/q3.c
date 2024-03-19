#include<stdio.h>
main(){
        int s;
    printf("Enter Any Number :");
    scanf("%d",&s);
    for (int i = 1; i <= 10; i++)
    {
        
        printf("%d x %d = %d\n",s ,i,s*i);
    }

}