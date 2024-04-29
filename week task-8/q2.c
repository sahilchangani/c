#include<stdio.h>
#include <math.h>

int main() {
    int cases;
    float p, r, t, a, compoundInterest;

    printf("Enter the number of cases: ");
    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++) {

        printf("Enter the principal amount: ");
        scanf("%f", &p);

        printf("Enter the annual interest rate (in percentage): ");
        scanf("%f", &r);

        printf("Enter the time period (in years): ");
        scanf("%f", &t);

        a = p * pow((1 + r / 100), t);

        compoundInterest = a - p;

        printf("Compound Interest: %.2f\n", compoundInterest);
    }

return 0;
}