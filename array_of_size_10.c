#include<stdio.h>
int min(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    { 
        if( min>a[i])
        min=a[i];
    }
    return min;
}
 int max(int a[] ,int n)
    {
        int max=a[0];
        for(int j=1;j<n;j++)
        {
            if(max<a[j])
            max=a[j];
        }
        return max;
    }
int sum(int a[],int n)
{
    int sum=0;
    for(int k=0;k<n;k++)
    {
        sum=sum+a[k];
    }
    return sum;
}
float avg(int a[],int n)
{
    float avg=0;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10.0;
    return avg;
}
void reverse(int a[],int n)
{
    for(int i=9;i>=0;i--)
    {
       printf("%d \t",a[i]);
    }
}

    void even_odd(int a[], int n)
    {
        int even =0,odd=0;
        for(int i=0;i<n;i++)
        {
        if(a[i]%2==0)
        even++;
        else  
        odd++;
        }
        printf("There are %d even elements\n",even);
        printf("There are %d odd elements\n",odd);   
        }
int odd(int a[],int n)
{
    int sum ;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
   }
   return sum;
}
int main()
{
int array[10],n;
printf("Enter size=\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter Number of elements=");
    scanf("%d",&array[i]);
}
int a=min(array,n);
printf("The minimum value in the array is %d\n",a);
int b=max(array,n);
printf("The maximum value in the array is %d\n",b);
int s=sum(array,n);
printf("The sum is %d \n", s);
float average=avg(array,n);
printf("Averge is =%f\n",average);
printf("The last element of array %d\n",array[9]);
printf("The value of 2 nd index =%d\n",array[1]);
reverse(array,n);
even_odd(array,n);    
odd(array,n);
return 0;
}