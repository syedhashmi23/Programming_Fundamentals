#include<stdio.h>

int main()
{

    int arr[25][25], brr[25][25],  row1, row2, column1, column2, i, j, k;
  int result[25][25]={0};
    printf("Enter rows and columns in matrix 1:\n ");
    scanf("%d %d", &row1, &column1);

    printf("Enter rows and columns in matrix 2:\n ");
    scanf("%d %d",&row2, &column2);

    if  (column1!=row2)
       {
        printf("undefined matrix");
      }

   else 
   {
    printf("\nEnter numbers of matrix 1:\n\n");
    for(i=0; i<row1;  i++)
        for(j=0; j<column1;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    printf("\nEnter elements of matrix 2:\n\n");
    for(i=0; i<row2;  i++)
    {
        for(j=0; j<column2;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
 
    printf("D matrix \n ") ;
    for(i=0; i<row1; i++)
       { for(j=0; j<column1; j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
       }
        printf("E matrix \n ");
    for(i=0; i<row1;i++)
       { for(j=0; j<column1; j++)
        {
            printf("%d \t",brr[i][j]);
        }
        printf("\n");
       }
    for(i=0; i<row1; i++)
      {  for(j=0; j<column2; j++)
        {
            for(k=0; k<column1; ++k)
            {
                result[i][j]=result[i][j]+arr[i][k]*brr[k][j];
            }
        }
      }
    printf("\nOutput Matrix:\n");
    for(i=0; i<row1;  i++)
       { for(j=0; j<column2; ++j)
        {
            printf("%d \t ", result[i][j]);
        }
        printf("\n");
       }
   }
    return 0;
}