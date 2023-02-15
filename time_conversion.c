#include<stdio.h>

int main()
{
    int seconds, minutes, hours, days;
    
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    
    minutes = minutes % 60;
    hours = hours % 24;
    seconds = seconds % 60;
    
    printf("sec when converted have %d days\n%d hours\n%d minutes\nand %d seconds\n",  days, hours, minutes, seconds);
    
    return 0;
}
