#include<stdio.h>
int find_small_val(int A[]);

int main()
{    
    int d[4]={0,1,28,5};
    int b=find_small_val(d);
    printf("%d",b);
    return 0;
}    
int find_small_val(int A[])
{ 
    
    for(int i=1;1;i++)
    {
        int count=0;
        for(int k=0;k<=4;k++)
        {
            if(A[k]==i)
            count++;
        }
    
        if(count==0)
        return i;
    }
    
}