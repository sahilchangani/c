#include<stdio.h>
main(){
    int a=8, b=23, c=12;

    if (a<b)
    {
        if (a<c){
            printf("A is small");
        }
        else
        {
            printf("C is small");
        }
        
    }
    else{
        if (b<c)
        {
            printf("b is small");
        }
        else
        {
          printf("C is small")  ;
        }
        
        
    }
    
}