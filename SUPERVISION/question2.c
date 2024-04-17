#include<stdio.h>
#include<string.h>

struct car
{
    int id;
    char company[100];
    char model[100];
      int year;

    char color[100];
    int price;
    char mileage[100];


}a1[1000];

main(){
    int n;
    printf("enter car detail number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter car id:");
        scanf("%d",&a1[i].id);

        printf("enter car company:");
        scanf("%s",&a1[i].company);


        printf("enter car model:");
        scanf("%s",&a1[i].model);

         printf("enter car year:");
        scanf("%d",&a1[i].year);


        printf("enter car color:");
        scanf("%s",&a1[i].color);

        printf("enter car price:");
        scanf("%d",&a1[i].price);

        printf("enter car milege :");
        scanf("%s",&a1[i]. mileage);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("id:%d\n",a1[i].id);
        printf("company:%s\n",a1[i].company);
        printf("model:%s\n",a1[i].model);
        printf("year:%d\n",a1[i].year);
        printf("color:%s\n",a1[i].color);
        printf("price:%d\n",a1[i].price);
        printf("milege:%d\n",a1[i].mileage);
    }
    
    
}