#include<stdio.h>
void main(){
    char val[100];
    printf("enter any string:");
    scanf("%s",val);

    for (int i = 0; val[i]!=NULL; i++)
    {
        if (val[i]>='a'&&val[i]<='z')
        {
            val[i]-=32;
        }
     
        
    }
            printf("uppercase string is:%s",val);
}