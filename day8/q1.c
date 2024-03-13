#include<stdio.h>
main(){
    int a=5,b=3,c=1;
    (a<b)?(a<c)?printf("A is small"):printf("C is small")
    :(b<c)?printf("B is small"):printf("C is small");

}