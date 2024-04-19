#include<stdio.h>
main(){
    FILE *p;
    p=fopen("demo.txt","r");
    char data[100];
    if (p == NULL)
    {
        printf("can't open\n");
    }else{
        printf("open file");
        while (fgets(data,50,p) != NULL)
        {
            printf("\n");
            printf("%s",data);
        }
        
    }
    
}