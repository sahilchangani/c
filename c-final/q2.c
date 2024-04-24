#include <stdio.h>
 main()
{
    int len;
    printf("Enter array Length:");
    scanf("%d", &len);
    int arr[len];
    int min=arr[0] ;

    for (int i = 0; i < len; i++)
    {
        printf("Enter elements of array:");
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        } 
    }
    printf("Smallest element in the array is: %d", min);

}