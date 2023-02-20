#include <stdio.h>
int main()
{
    float max=0;
    float d[3][4];
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    {
        printf("Enter the Required Number=");
        scanf("%f",&d[i][j]);
        if(d[i][j]>max)
        max=d[i][j];
    }
    printf("the value is %f",max);
    return 0;
}