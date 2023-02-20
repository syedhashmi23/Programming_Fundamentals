#include <stdio.h>
int main()
{
    int a[10];
    int* ptr;
    ptr = a;
    int max,number, maxnumber=0;
    printf("Enter 10 integers: \n");
     for(int i=0; i<10; i++)
          {
        scanf("%d", (ptr+i));
         }
        for(int i = 0; i< 10; i++) 
          {
       number = 1;
            for(int j = i+1; j < 10; j++) 
                     {
         if(*(a+j) == *(a+i))
             {
         number++;
    if(number > maxnumber)
             {
      max = *(a+j);
         }
             }
         }
                }
     printf("\n more Repeated numbers : %d",max);
return 0;
}