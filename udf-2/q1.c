#include<stdio.h>
int sum(int row, int number[]){
    int sum =0;
    for (int i = 0; i < row; i++)
    {
       
        sum += number[i];
    }
        printf("%d \n",sum);    
}
main(){
    int row;
    printf("Enter rows: ");
    scanf("%d",&row);
    int number[row];
    for (int i = 0; i < row; i++)
    {      
        printf("number[%d]: ",i);
        scanf("%d",&number[i]);
    }
    sum(row,number);
}