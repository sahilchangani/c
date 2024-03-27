#include <stdio.h>

int main() {

    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("This number is not a prime number.\n");
        return 0;
    }

    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            printf("Entered number is not a prime number.\n");
            return 0;
        }
    }

    printf("Entered number is a prime number.\n");
    return 0;
}