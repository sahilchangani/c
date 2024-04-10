#include<stdio.h>
fact(int n){
    if (n<=1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    
}
void main(){
    int a;
    printf("enter any value:");
    scanf("%d",&a);
    printf("%d",fact(a));
}