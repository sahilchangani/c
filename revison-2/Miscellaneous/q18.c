#include<string.h>
int main(){
    int n;
    int fact= 1;
    printf("Enter the Number:");
    scanf("%d",&n);

    for (int i = n; i >1; i--)
    {
        fact*=i;   
    }
    printf("Factorial of %d is: %d ",n ,fact);

    return 0;
}