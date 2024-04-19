#include<stdio.h>
main(){
    FILE *p;
    p=fopen("de.txt","a");
    char data[100];
    if (p==NULL)
    {
        printf("can't open\n");
    }else{
        printf("open file");
    fputs(" i love cricket ",p);


    }
    
}