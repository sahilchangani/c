#include<stdio.h>
main(){
    int f=0,s=1,d,j;
    printf("Enter Any Number :");
    scanf("%d",&d);

    for (int i = 1;  i<= d; i++)
    {
        printf("%d\n",f);
        j=f+s;
        f=s;
        s=j;
    }
    
}