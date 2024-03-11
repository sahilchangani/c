#include<stdio.h>
main(){
    int a;
    printf("enter the mark:");
    scanf("%d",&a);
    if(a<50){
        printf("Sorry! You failed the exam better luck next time`");
}else{
    printf("Congratulations! You have passed the exam");
}
}