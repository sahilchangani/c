#include<stdio.h>
#include<string.h>

struct book
{
    int id;
    char title[100];
    char auther[100];
        char genre[100];
    char publisher[100];

      int year;

    int price;


}a1[1000];

main(){
    int n;
    printf("enter book number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter book id:");
        scanf("%d",&a1[i].id);

        printf("enter book title:");
        scanf("%s",&a1[i].title);


        printf("enter book auther:");
        scanf("%s",&a1[i].auther);

                printf("enter book genre :");
        scanf("%s",&a1[i].genre);




        printf("enter book publisher:");
        scanf("%s",&a1[i].publisher);

                 printf("enter book year:");
        scanf("%d",&a1[i].year);


        printf("enter book price:");
        scanf("%d",&a1[i].price);

    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("id:%d\n",a1[i].id);
        printf("title:%s\n",a1[i].title);
        printf("auther:%s\n",a1[i].auther);
                printf("genre:%s\n",a1[i].genre);

        printf("publiser:%s\n",a1[i].publisher);
        printf("price:%d\n",a1[i].price);
                printf("year:%d\n",a1[i].year);

    }
    
    
}