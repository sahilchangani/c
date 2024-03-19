#include<stdio.h>
main(){
    int s, n=0;
    printf("Enter Any Number :");
    scanf("%d",&s);
    for (int i = 1; i <= s; i++)
    {
        n += i;
    }
        printf("%d\n",n);
}