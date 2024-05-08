#include<stdio.h>

main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        if (num1 >= num3)
       {
        
            printf("%d is the largest number.", num1);
        }
        else{
        {
            printf("%d is the largest number.", num3);
        }
    }

   
    
        if (num2 >= num3)
       {
        
            printf("%d is the largest number.", num2);
        }
        else{
        
            printf("%d is the largest number.", num3);
        }
    }
}
