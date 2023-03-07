#include<stdio.h>
void calculate_attendance(int class_attended, int total_classes)
{
    int attendance = class_attended / total_classes * 100;
    printf("the attendance of your's is %d\n",attendance);
    if (attendance >= 80)
    {
        printf("you are eligible for the examination");
    }
    else
    {
        printf("you are not eligible for the examination");
    }
}
int main()

{
    int class_attended, total_classes;
    printf("the no of classes attended is :");
    scanf("%d",&class_attended);
    printf("the total number of classes:");
    scanf("%d",&total_classes);
    calculate_attendance(class_attended, total_classes);
    return 0;
}