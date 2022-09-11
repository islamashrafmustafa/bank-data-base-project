// author Islam Ashraf Mustafa
// 6/27/2022
// bank data base project
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include"bank data base.h"
int counter;
customer_t arr[3];
int main(void)
{
  char choice;
  int id_check;
  int id_from;
  int id_to;
  double money_transfer;
  while(1)
  {
      printf("please select one of the following options :\n\n");
      printf("1-create anew customer(press 1 to select this option)\n");
      printf("2-edit customer (press 2 to select this option)\n");
      printf("3-delete customer(press 3 to select this option)\n");
      printf("4-print customer data(press 4 to select this option)\n");
      printf("5-cash transfer from customer to another(press 5 to select this option)\n");
      printf("6-exit(press 1 to select this option)\n\n");
      printf("please enter your choice:");
      fflush(stdin);
      scanf("%i",&choice);
      if (choice==1)
      {
           creat_new_customer();
      }
      else if (choice ==2)
      {
           printf("please enter the id of the customer who you need to change its data : ");
           scanf("%i",&id_check);
           edit_customer(id_check);
      }
      else if (choice==3)
      {
           printf("please enter the id of the customer who you need to delete its data : ");
           scanf("%i",&id_check);
           delete_customer_data(id_check);
      }
      else if (choice ==4)
      {
          printf("please enter the id of the customer who you need to print its data : ");
          scanf("%i",&id_check);
          print_customer_data(id_check);
      }
      else if (choice==5)
      {
          printf("please enter the id of the customer who the money will transfer from his cash : ");
          scanf("%i",&id_from);
          printf("please enter the id of the customer who the money will transfer to his cash : ");
          scanf("%i",&id_to);
          printf("please enter the money will be transfered : ");
          scanf("%lf",&money_transfer);
          transfer_money(id_from,id_to,money_transfer);
      }
      else
      {
          return 0;
      }
  }
}

