#include <stdio.h>
int main()
{
    int x, y, sum, mul;
    printf("Enter the first number and second number:- ");
    scanf("%d%d", &x, &y);
    sum = x + y, mul = x * y;
    printf("mul = %d sum = %d", mul, sum);
    return 0;
}