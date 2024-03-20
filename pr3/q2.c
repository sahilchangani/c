#include <stdio.h>

int main() {
    int a, j = 0;
    printf("Enter any number: ");
    scanf("%d", &a);

    while (a != 0) {
        a = a/10;
        j++;
    }

    printf("Total number is : %d\n", j);
    
}