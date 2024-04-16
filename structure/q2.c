#include<stdio.h>
#include<string.h>

struct stduent
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company_name[100];


}a1[1000];

main(){
    int n;
    printf("enter student number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter student id:");
        scanf("%d",&a1[i].id);

        printf("enter student name:");
        scanf("%s",&a1[i].name);

        printf("enter student age:");
        scanf("%d",&a1[i].age);

        printf("enter student role:");
        scanf("%s",&a1[i].role);

        printf("enter student city:");
        scanf("%s",&a1[i].city);

        printf("enter student experience:");
        scanf("%d",&a1[i].experience);

        printf("enter student company_name:");
        scanf("%s",&a1[i].company_name);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("id:%d\n",a1[i].id);
        printf("name:%s\n",a1[i].name);
        printf("age:%d\n",a1[i].age);
        printf("role:%s\n",a1[i].role);
        printf("city:%s\n",a1[i].city);
        printf("experince:%d\n",a1[i].experience);
        printf("company_name:%s\n",a1[i].company_name);
    }
    
    
}