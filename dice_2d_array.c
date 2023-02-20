#include <stdio.h>

int main() {

  int n[9], a, c=0;
  for(int i=0;i<9;i++)
  {
    printf("Enter %d integer of array:\n ",i);
  scanf("%d", &n[a]);
  }

  for(int j=0;j<9;j++)
  {
 int store=1;
  for ( int k = 1; k <= n[a] / 2; ++k) 
  {
    if (n[a] % k == 0) 
    {
      store = 0;
    
    }
  }
  if (store == 1)
    c++;
  }
printf("Prime numbers=%d", c);
  return 0;
}