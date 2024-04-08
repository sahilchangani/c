#include<stdio.h>


 addNumbers(int a, int b){
    printf("The sum of two numbers is: %d\n", a + b);
}

void main(){
    int num1 = 5, num2 = 10;
    addNumbers(num1, num2);
}