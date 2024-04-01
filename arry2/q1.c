

#include<stdio.h>
main(){
    int row,col;
    printf("enter size of row:");
    scanf("%d",&row);
        printf("enter size of col:");
    scanf("%d",&col);
    int arr[row][col];
    float average=0;
    float sum=0;

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("enter the array size:");
            scanf("%d",&arr[i][j]);

        }
        
    }
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            sum+=arr[i][j];
        }
        
    }
    average+=sum;
    printf("Average of an Array: %.2f",sum/(row*col));
    
    
}