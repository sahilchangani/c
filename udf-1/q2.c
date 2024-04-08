#include<stdio.h>

void divideNumbers(int dividend, int divisor){
    if(divisor == 0){
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("The quotient of two numbers is: %d\n", dividend / divisor);
    }
}

void main(){
    int num1 = 10, num2 = 2;
    divideNumbers(num1, num2);
}