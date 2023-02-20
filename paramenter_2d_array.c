#include <stdio.h>
#define MAX 5
//d taken as 2d array in both function
int ConnectedComponents(int d[MAX][MAX]) 
{ 
    int locate[MAX][MAX], count = 0; 
 
    for (int i=0; i<MAX; i++) 
        for (int j=0; j<MAX; j++) 
            locate[i][j] = 0; 
  
      for (int i=0; i<MAX; i++) 
    { 
        for (int j=0; j<MAX; j++) 
        { 
 
            if (d[i][j] == 1 &&   locate[i][j] == 0) 
            { 
  
                locate[i][j] = 1; 
  
                count++; 
            } 
        } 
    } 
    return count; 
} 
  
void main() 
{ 
    int d[MAX][MAX] = {{1, 0, 0, 0, 0},  
                        {0, 1, 0, 0, 0},  
                        {1, 1, 0, 0, 0},  
                        {0, 0, 0, 0, 1},  
                        {1, 0, 0, 0, 1}}; 
  
    printf("Number of components: %d", 
            ConnectedComponents(d)); 
    return 0; 
}