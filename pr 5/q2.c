#include <stdio.h>

int main() {

    int row, col;
    int largest ;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);
    int  arr[row][col];
    int max=0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
        printf("a[%d],[%d]",i,j);
        scanf("%d", &arr[i][j]);
            
    }
  }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    printf("The largest is: %d\n", max);
    
  }
  
  


