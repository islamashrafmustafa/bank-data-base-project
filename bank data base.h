typedef struct customer
{
    char name[50];
    double cash;
    char  type[10];
    int id;
}customer_t;


void creat_new_customer(void);
void edit_customer(int id);
void print_customer_data(int id);
void transfer_money(int id_from,int id_to,double money);
void delete_customer_data(int id);
