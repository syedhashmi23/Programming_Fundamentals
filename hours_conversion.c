#include<stdio.h>
int main()
{

 int hours =1,minutes,seconds;
 minutes = hours*60;
 seconds = minutes * 60;
    
    printf("enter hours:");
    printf("%d hours have %d minutes", hours, minutes);
    printf("\n%d hours have %d seconds", hours, seconds);
    return 0;
}