#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d triangular numbers to have more than 10 divisors are: \n", n);
    for(i = 1; ; i++)
    {     
        int triangle_number = (i * (i + 1)) / 2;
        int divisor = 0 ;
      
        for(int j = 1; j <= sqrt(triangle_number); j++)
        {
            if(triangle_number % j == 0)
            {
                if(j == triangle_number / j)
                    divisor++;
                else
                    divisor = divisor + 2;
            }
        }
       
        if(divisor > 10)
        {
            printf("%d  \t", triangle_number);
            count++;
            
         for (int l = 1; l <= triangle_number ; l++)
            {
                if (triangle_number %l==0)
                    printf("%d \t",l);
                }
                 printf("\n");
        }
      
        if(count == n)
        {
           
            break;
    }
    }
    return 0;
}
