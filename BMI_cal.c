#include<stdio.h>
int main()
{
    float bmi, height, weight;
    printf("enter height:\n");
    scanf("%f", &height);
    printf ("enter weight:\n");
    scanf("%f", &weight);
     bmi = weight/(height*height);
    printf("your bmi is %f\n", bmi);
}