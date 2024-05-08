#include<stdio.h>

fact(int n)
  {
    if(n > 1)
   {
        return n * fact(n - 1);
    } 
    else{
        return 1;
    }
}

main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, fact(num));
}