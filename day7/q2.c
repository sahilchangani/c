#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 100;
    b = 20;
    c = 125;
    d = 45;

    if (a > b)
    {
        
        if (a > c)
        {
        
            if (a > d)
            {
                
                printf("A is max");
            }
            else
            {
                if (d > b)
                {
                    
                    if (d > c)
                    {
                        
                        printf("D is max");
                    }
                }
            }
        }
        else
        {
            if (c > b)
            {
                if (c > d)
                {
                    printf("C is max");
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B is max");
            }
            else{
                printf("d is max");
            }
        }
        else{
            printf("c is max");
        }
    }
}