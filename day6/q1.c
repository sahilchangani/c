#include<stdio.h>
main(){
    int a,b;
    printf("enter thr first value:");
    scanf("%d",&a);
        printf("enter thr second value:");
    scanf("%d",&b);
    if(a<b){
        printf("the minimum value is: %d",a);
}else{
    printf("the minimum value is: %d",b);
}
}