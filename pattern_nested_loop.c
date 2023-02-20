#include <stdio.h>
int main()
{
    int i, j, k, rows=5;
for(i=0; i<rows; i++){
    for(j=0; j<i; j++){
        printf("  ");
    }
    for(k=rows; k>i; k--){
        printf("* ");
    }
    printf("\n");
}
return 0;
}