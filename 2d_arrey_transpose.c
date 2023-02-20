#include <stdio.h>
int main()
 {
  int a[10][10], transpose[10][10], row, column;
  printf("Enter rows =");
  scanf("%d",&row);
printf("Enter column=");
 scanf("%d",&column);
  printf("Enter elements for matrix:\n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }


  printf("Entered matrix: \n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("%d  ", a[i][j]);
    if (j == column - 1)
    printf("\n");
  }

  
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    transpose[j][i] = a[i][j];
  }

 
  printf("Transpose of the matrix:\n");
  for (int i = 0; i < column; ++i)
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
  }
  return 0;
}