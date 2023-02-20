#include <stdio.h>
int lowest(int x, int y)
{
    int m = (x > y) ? x : y;

    for( int i=1;i>x||y;i++)
    {
        if ((m % x == 0) && (m % y == 0)) {
            break;
        }
        ++m;
    }
    return m;
}
int main()
{
    int a, b, lcm;
    printf("enter value  of x\n");
    scanf("%d",&a);
    printf("Enter value of y\n");
    scanf("%d",&b);
    lcm = lowest(a, b);
    printf("The lcm of%d & %d = %d", a, b, lcm);
    return 0;
}