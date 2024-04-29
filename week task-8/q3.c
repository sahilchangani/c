#include <stdio.h>

void reverse_number(int number) {
    int reversed = 0;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);
}

int main() {
    int n;
    printf("Enter the integer number: ");
    scanf("%d", &n);

    reverse_number(n);

    return 0;
}