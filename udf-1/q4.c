#include<stdio.h>

calculateCube(int a){
printf("the square of a number : %d",a*a*a);
}

void main(){
    int num1;
    printf("Enter the square number: ");
    scanf("%d", &num1);

    calculateCube(num1);
}