#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int answer;
    printf("enter the first number\n");
    scanf("%d", &num1);
    printf("enter the second number\n");
    scanf("%d", &num2);
    answer = (num1 * num1) + (num2 * num2) + 2*(num1 * num2);
    printf("the answer is: %d\n", answer);
    return 0;
}