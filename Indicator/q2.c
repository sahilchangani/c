#include<stdio.h>
swap(int *a, int *b, int *c){
    int *d;
    d=*c;
    *b=*c;
    *c=*a;
    *a=d;

    printf("after swap:\n");
    printf("first value:%d\n",*a);
    printf("second value:%d\n",*b);
    printf("third value:%d\n",*c);
}

void main(){
    int a,b,c;
    printf("First value :");
    scanf("%d",&a);
        printf("second value :");
    scanf("%d",&b);
    printf("third value :");
    scanf("%d",&c);
    swap(&a,&b,&c);
}