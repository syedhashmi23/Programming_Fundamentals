#include<stdio.h>
int main()
{
	char m='a',n='b',s,age;
    printf("verifiy age\n"); 
	scanf("%d",&age);
	if(s==m)
	{
		if(age<65)
		{
			printf("fee is 10$");
		}
		else if(age>=65)
		{
			printf("fee is 05$");
		}
	}
	else 
	printf("fee is 20$");
	return 0;
}
