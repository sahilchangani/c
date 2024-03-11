#include <stdio.h>

main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf(" is an even number %d", a);
    } else {
        printf(" is an odd number.%d", a);
    }
}