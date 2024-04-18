#include <stdio.h>

int main()
{

    int arr[100];
    int n;

    printf("Enter array size:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter array elements:");
        scanf("%d", &arr[i]);
    }
    printf("reverse array\n");
    for (int i = n-1; i >= 0; i--)
    {
            printf("array element is = %d\n", arr[i]);
    }

    return 0;
}