#include <stdio.h>
int fact();

void main()
{
    int n, r, nCr;
    printf("Enter a number n\n");
    scanf("%d",&n);
    printf("Enter a number r\n");
    scanf("%d",&r);
    nCr = fact(n) / (fact(r) * fact(n - r));
    printf("Value of %dc%d = %d\n", n, r, nCr);
}
int fact(int n)
{
int i, f = 1;
{
    int i, f = 1;
    for (i = 1;i <= n;i++)
    {
        f = f * i;
    }
    return f;
}
}