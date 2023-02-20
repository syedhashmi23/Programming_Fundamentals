#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    char s[1000];  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
 	
     
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
    
    return 0;
}
int frequency()
{
    char s[1000];  
    int  a[1000],i,j,k=0,count=0,n;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(j=0;s[j];j++);
	   n=j; 
    
    for(i=0;i<n;i++)  
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;
	   
	   
 	}
 	printf("maximum characters occur ");
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }  
     
	printf("\b=%d times \n ",k);
 
 	 
     
    return 0;
}
