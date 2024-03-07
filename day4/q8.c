#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    printf("Enter the value of d:");
    scanf("%d",&d);

    e = (a + b)*(c - d);

    printf("The expression is: %d\n",e);

}