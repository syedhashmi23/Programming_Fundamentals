#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice1, dice2, sum, prime[13]={0};

    srand((unsigned)time(0));

    for (int i = 0; i < 1000; i++)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
       int sum = dice1 + dice2;
      prime[sum]++;
    }

    for (int j = 2; j <= 12; j++)
    {
        printf("%d appears %d times\n", j, prime[j]);
    }
    return 0;
}