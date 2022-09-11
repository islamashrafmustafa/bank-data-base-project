#include"bank data base.h"
#define size 3
 int i=1;
 customer_t arr[size];
void creat_new_customer(void)
{
    if (i==4)
    {
        printf("the maximum number of customers is 3 so you can not add any more\n");
    }
    else
    {
        printf("please enter the name of the customer number %i:",i);
        scanf("%s",arr[i].name);
        printf("please enter the cash of the customer number %i:",i);
        scanf("%lf",&arr[i].cash);
        printf("please enter the type of the customer number %i:",i);
        scanf("%s",arr[i].type);
        printf("please enter the id of the customer number %i:",i);
        scanf("%i",&arr[i].id);
        i++;
    }
}
void print_customer_data(int id)
{
    for (int i=1;i<=3;i++)
    {
        if (arr[i].id==id)
        {
            printf("the name of the customer number%i is : %s \n ",i,arr[i].name);
            printf("the cash of the customer number%i is : %lf\n",i,arr[i].cash);
            printf("the type of the customer number%i is : %s\n",i,arr[i].type);
            printf("the id of the customer number%i is : %i\n",i,arr[i].id);
            printf("\n");
        }
    }
}
void edit_customer(int id)
{
     for (int i=1;i<=3;i++)
     {
         if (arr[i].id==id)
         {
             printf("please enter the new name :");
             scanf("%s",arr[i].name);
             printf("please enter the new cash :");
             scanf("%lf",&arr[i].cash);
             printf("please enter the new type(credit or debit) :");
             scanf("%s",arr[i].type);
             printf("please enter the new id :");
             scanf("%i",&arr[i].id);
         }
     }
}
void delete_customer_data(int id)
{
    int j;
    if ((arr[1].id==id)||(arr[2].id==id)||(arr[3].id==id))
    {
    for (int j=1;j<=size;j++)
    {
        if (arr[j].id==id) break;
    }

    for (j;j<size-1;j++)
    {
        arr[j]=arr[j+1];
    }
    i--;
    }
}
void transfer_money(int id_from,int id_to,double money)
{
    int j;
    int k;
    for (j=1;j<=size;j++)
    {
        if (arr[j].id==id_from) break;
    }
     for (k=1;j<=size;k++)
    {
        if (arr[k].id==id_to) break;
    }
    if (arr[j].cash<money)
    {
        printf("the money transfered is greater then your cash ");
        printf("please enter the money transfered again and take care :");
        scanf("%lf",&money);
        transfer_money(id_from,id_to,money);
    }
    else
    {
    arr[j].cash-=money;
    arr[k].cash+=money;
    }
}
