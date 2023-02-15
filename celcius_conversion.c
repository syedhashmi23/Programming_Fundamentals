# include <stdio.h>
int main()
{
    int celsius,fahrenheit;
    printf("Temperature in celsius =");
    scanf("%d",&celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("fahrenheit = %d\n",fahrenheit);
    return 0;

}