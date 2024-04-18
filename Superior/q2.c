#include<stdio.h>
main(){
        int arr[50];
    int n;
    int max = 0;

     printf("Enter arry size :");
    scanf("%d",&n);
        for (int i = 0; i < n; i++)
    {
        printf("enter arry elements:");
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
        printf(max = arr[i]);
        }
        
    }
printf("max elements is : %d\n",max);

}