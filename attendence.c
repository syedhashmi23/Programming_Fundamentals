#include <stdio.h>
float class_atd(float class_atd, float total_class)
{
    float per;
    per = (class_atd/total_class) * 100;
    printf("Total classes attended=%f\n",per);
    if (per >= 80)
    {
        printf("Allowed");
    }
    else
    {
        printf("Not_Allowed");
    }
}
int main()
{
    int a, b;
    printf("Enter Total classes");
    scanf("%d", &a);
    printf("Enter total classes attended");
    scanf("%d", &b);
    class_atd(a, b);
    return 0;
}