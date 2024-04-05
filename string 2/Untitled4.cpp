#include<stdio.h>
#include<string.h>
main(){
	char n[100];
	printf("Enter your name :");
	gets(n);
	char a[100];
	
	strcpy(a,n);
	printf("The copy string is :");
	puts(a);
}
