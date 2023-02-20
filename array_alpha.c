#include <stdio.h>
int main()
{
int arr[60];
int i, j ,k;
for( int i=0;i<20;i++)
{
    arr[i]=i*i;
    printf("%d \t",arr[i]);
}
for(int j=20;j<40;j++)
{
    arr[j]=j*j*j;
    printf("%d \t",arr[j]);
}
for (i=0,j=20,k=40;i<20,j<40,k<60;i++,j++,k++)
{
    arr[k]=arr[i]+arr[j];
    printf("%d \t",arr[k]);
}
return 0;
}