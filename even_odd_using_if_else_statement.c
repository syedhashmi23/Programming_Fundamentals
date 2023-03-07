#include<stdio.h>
#include<stdbool.h>

void isEven(int number)
{
    if(number %2==0)
    {
        printf("%d is even\n",number);
    }
    else
    {
        printf("%d is odd\n",number);
    } 
}
int main()
{
    int number;
    printf("enter a number = ");
    scanf("%d",&number);
    isEven(number);
    return 0;
}
 
