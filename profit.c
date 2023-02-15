#include <stdio.h>
int main()
{
    int cost,sell;
    //profit = 20%
   
    printf("enter the cost price = ");
    scanf("%d",&cost);
   sell = (0.2*cost)+cost;
   printf("the selling price = %d",sell);
   
    
    return 0;
}