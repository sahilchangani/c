#include<stdio.h>
 main(){

    int a;
    int arr[a];

    printf("Enter the arry size: ");
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Negative elements from an Arry: ");

    for (int i = 0; i < a; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d",arr[i]);
        }
        
    }
    
}