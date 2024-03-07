#include <stdio.h>

main() {
    float a, b,c;

    printf("Enter the first angle: ");
    scanf("%f", &a);

    printf("Enter the second angle: ");
    scanf("%f", &b);

    c = 180 - a - b;

    printf("The third angle is: %.2f\n", c);
}