#include <stdio.h>

main() {
    float a,b,c;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &a);
    printf("Enter your height in meters: ");
    scanf("%f", &b);
    c = a / (b * b);
    printf("Your BMI is: %.2f", c);
}