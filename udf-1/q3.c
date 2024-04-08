#include<stdio.h>

 divideNumbers(int dividend, int divisor){
    if(divisor == 0){
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("The quotient of two numbers is: %d\n", dividend / divisor);
    }
}

void main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    divideNumbers(num1, num2);
}