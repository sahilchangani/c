#include<stdio.h>
min(int *a , int *b){
if (*a>*b)
{
    printf("Minimum number is %d",*b);
}else{
    printf("Minimum number is %d",*a);
}

}
main(){
  int a,b;
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Enter value of b :");
  scanf("%d",&b);

    min(&a,&b);
}