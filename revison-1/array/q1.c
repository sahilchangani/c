#include<stdio.h>

main(){
    int size,sum = 0;

    printf("Enter array size : ");
    scanf("%d",&size);


    int arr[size];

    for (int i = 0; i < size; i++)
    {
        
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i < size; i++)
    {
        
        sum += arr[i];
    }
        printf("%d",sum);


}