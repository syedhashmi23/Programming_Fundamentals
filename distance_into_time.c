#include <stdio.h>

int main()
{
    float distance, hours, minutes, speed;
    printf("Enter the distance in km: ");
    scanf("%f", &distance);
    printf("Enter the time in hours: ");
    scanf("%f", &hours);
    printf("Enter the time in minutes: ");
    scanf("%f", &minutes);
    hours += minutes / 60;
     speed = (distance * 1000) / (hours * 3600);
    printf("The speed is %.2f m/sec.\n", speed);

    return 0;
}
