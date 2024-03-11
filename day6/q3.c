#include <stdio.h>

main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("is a positive number %d", a);
    } else if (a < 0) {
        printf("is a negative number %d", a);
    } else {
        printf(" is a neutral number %d", a);
    }
}