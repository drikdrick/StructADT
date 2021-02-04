#include "KasirHeader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j;

void CetakBon(Customer *ptrCustomer,int jlhCustomer){
    printf("========Rumah makan Tekinfo========");
    int total=0;

    for (i = 0; i < jlhCustomer; i++)
    {
        int total2=0;
        printf("\n%s memesan\t:\n", ptrCustomer[i].nama_customer);
        for (j = 0; j < ptrCustomer[i].total_item; j++)
        {
            printf("Nama item\t\t:%s\n", ptrCustomer[i].myItem[j].nama_item);
            printf("Harga item\t\t:%d\n", ptrCustomer[i].myItem[j].harga);
            total2=total2+ptrCustomer[i].myItem[j].harga;
            total=total+ptrCustomer[i].myItem[j].harga;
        }

        printf("Total pesanan %s\t:%d\n", ptrCustomer[i].nama_customer, total2); 
    }

    printf("Total semua\t:%d\n", total);
    
}

int main(){
    int jlhCustomer;

    printf("Jumlah customer\t:");
    scanf("%d",&jlhCustomer);

    Customer *customer = (Customer *)malloc(sizeof(Customer)*jlhCustomer);

    for ( i = 0; i < jlhCustomer; i++)
    {
        printf("Customer ke-%d\t:\n",i+1);
        printf("Nama Customer\t\t:");
        scanf("%s",customer[i].nama_customer);
        printf("Jumlah Pesanan\t\t:");
        scanf("%d",&customer[i].total_item);

        customer[i].myItem=(Item*)malloc(sizeof(Item)*customer[i].total_item);

        for ( j = 0; j < customer[i].total_item; j++)
        {
            printf("Order %d",j+1);
            printf("Nama Item\t:");
            scanf("%s", customer[i].myItem[j].nama_item);
            printf("Harga Item\t:");
            scanf("%d",&customer[i].myItem[j].harga);
        }       

    }

    Customer *ptrCustomer = customer;

    CetakBon(customer, jlhCustomer);

    return 0;
    
}