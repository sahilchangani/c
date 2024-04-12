#include <stdio.h>

void cube(int *a) {
    *a = *a  *  *a  *  *a;

}

 main() {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);   
    cube(&a);

    printf("The cube of is %d\n", a);

}