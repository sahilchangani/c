#include <stdio.h>

main() {
    int a;

    printf("Enter a year: ");
    scanf("%d", &a);

    if (a % 4 == 0) {
        printf(" this is leap year %d", a);
    } else {
        printf(" this is not.%d", a);
    }
}