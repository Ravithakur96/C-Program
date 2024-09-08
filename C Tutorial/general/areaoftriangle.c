#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s;
    printf("Enter the value of a:- ");
    scanf("%f", &a);
    printf("Enter the value of b:- ");
    scanf("%f", &b);
    printf("Enter the value of c:- ");
    scanf("%f", &c);
   s = (a+b+c)/2;
    float A;
    A = s * (s - a) * (s - b) * (s - c);
    float root = sqrt(A);
    printf("%f", root);
    return 0;
}