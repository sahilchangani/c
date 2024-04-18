#include<stdio.h>
main(){
        int arr[50];
    int n;
    int min ;

     printf("Enter arry size :");
    scanf("%d",&n);
        for (int i = 0; i < n; i++)
    {
        printf("enter arry elements:");
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
        min = arr[i];
        }
        
    }
printf("min elements is : %d\n",min);

}