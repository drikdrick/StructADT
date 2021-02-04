// Fedrick Siagian

typedef struct SCustomer Customer;
typedef struct SItem Item;

struct SItem
{
    char nama_item[50];
    int harga;
};

struct SCustomer
{
    char nama_customer[50];
    int total_item;
    Item *myItem;
};
