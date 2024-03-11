#include <stdio.h>

main()
{
    int a;

    printf("Enter your mark: ");
    scanf("%d", &a);

    if (a < 90 && a >= 100)
    {
        printf("your mark is %d\n", a);
        printf("your grade is A");
    }
    else if (a < 80 && a >= 89)
    {
        printf("your mark is %d\n", a);
        printf("your grade is B");
    }
    else if (a < 70 && a >= 79)
    {
        printf("your mark is %d\n", a);
        printf("your grade is C");
    }
    else if (a < 60 && a >= 69)
    {
        printf("your mark is %d\n", a);
        printf("your grade is D");
    }
    else
    {
        printf("your mark is %d\n", a);
        printf("your grade is E");
    }
}