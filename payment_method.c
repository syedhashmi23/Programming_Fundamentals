#include <stdio.h>

void Payment_Method(float amount_transaction, float vip_customer) 
{
    if (vip_customer || amount_transaction >= 100.0) 
    {
        printf("Use Apple Pay.\n");
    } 
    else if (amount_transaction >= 10.0 && amount_transaction < 100.0) 
    {
        printf("Use credit card.\n");
    } 
    else 
    {
        printf("Use PayPal.\n");
    }
}

int main() 
{
    float amount_transaction, vip_customer;

    printf("Enter the amount of transaction: ");
    scanf("%f", &amount_transaction);

    printf("if vip customer enter 1 , if not press 0 to skip");
    scanf("%f", &vip_customer);

    Payment_Method(amount_transaction, vip_customer);

    return 0;
}
