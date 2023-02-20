#include <stdio.h>
void encrypted(char arr[]);
void decrypted(char arr[]);

int main()
{
   int j;
   char str[100];

   printf("\nstring to be entered:\t");
   scanf("\n%s",str);

   printf("\nchoose any option:\n");
   printf("Press 1 for Encryption.\n");
   printf("Press 2 for Decryption.\n");
   scanf("\n%d", &j);
    
    if(j==1)
    encrypted(str);
    else if(j==2)
    decrypted(str);

return 0;
}
   
   
   
   
   
void encrypted(char arr[])
{
 int ch; 
      for( int i = 0; arr[i] != '\0'; ++i)
      {
          ch = arr[i];
            if(ch >= 'a' && ch <= 'z')
            {
               ch = ch +3;
               if(ch > 'z')
               {
                  ch = ch - 'z' + 'a' - 1;
               }
               arr[i] = ch;
            }
           else if(ch >= 'A' && ch <= 'Z')
            {
             ch = ch +3;
             if(ch > 'Z')
               {
                  ch = ch - 'Z' + 'A' - 1;
               }
             arr[i] = ch;
            }
      }

printf("\nEncrypted string: %s\n", arr);
      
  }
  
  
void decrypted (char arr[])
{
int ch;
     for(int i = 0; arr[i] != '\0'; ++i)
     {
        ch =arr[i];
        if(ch >= 'a' && ch <= 'z')
        {
          ch = ch - 3;
          if(ch < 'a')
          {
            ch = ch + 'z' - 'a' + 1;
          }
          arr[i] = ch;
        }
         else if(ch >= 'A' && ch <= 'Z')
         {
         ch = ch -3;
         if(ch < 'A')
         {
           ch = ch + 'Z' - 'A' + 1;
          }
          arr[i] = ch;
         }
      }
printf("\nDecrypted string: %s\n", arr);

}



