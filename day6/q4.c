#include <stdio.h>

main() {
    int a;

    printf("Enter your age : ");
    scanf("%d", &a);

    if (a >= 18) {
        printf(" you can  vote %d", a);
    } else if (a < 18) {
        printf(" you can not vote %d", a);
}
     else {
        printf(" this is not  %d", a);
    }
}