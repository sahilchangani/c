#include<stdio.h>
main(){
    int arr[50];
    int n;
    int sum = 0;

    printf("Enter arry size :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter arry elements:");
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
        printf("sum of the arry is : %d",sum);
    
}