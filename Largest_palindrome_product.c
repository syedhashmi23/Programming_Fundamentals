#include<stdio.h>
int count(int num);
int rev_dig(int num,int p);
void printmax();
int main()
{
printmax();

}

int count(int num)
{
int count=0;
while(num!=0)
{
num=num/10;
count++;
}

return (count-1);
}

int rev_dig(int num, int p)
{
int res;
int sum=0;
for(int i=p;i>=0;i--)
{
res=(num%10);
for(int j=i;j>=1;j--)
res=res*10;
sum=sum+res;
num=num/10;
}
return sum;
}

void printmax()
{
int prod;
int max=0;
int a;
int m;
for(int i=100;i<=999;i++)
{
for(int j=100;j<=999;j++)
{

prod=i*j;
a=count(prod);
m=rev_dig(prod,a);
if(m==prod)
{
if(m>max)
max=m;
}
}
}
printf("%d",max);
}