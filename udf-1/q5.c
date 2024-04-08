#include<stdio.h>

calculateSquare(int a){
printf("the calculateSquare of a number : %d",a*a);
}

void main(){
    int num1;
    printf("Enter the calculateSquare number: ");
    scanf("%d", &num1);

    calculateSquare(num1);
}