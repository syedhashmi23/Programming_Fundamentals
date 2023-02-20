#include <stdio.h>
float price(int no_pgs)
{
    float price;
    float ser_charge=  3.0 ;
    if(no_pgs <= 10)
    price = 10 * 0.2 + ser_charge;
    else
    price = 2 + ((no_pgs -10) * 0.10);
    return price;
}
int main()
{
    int a;
    float total;
    printf("Enter no of pgs\n");
    scanf("%d", &a);
    total = price (a);
    printf("price = %f", total);
    return 0;
}