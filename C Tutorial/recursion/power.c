#include <stdio.h>
int power(int a, int b)
{
if(b==0) return 1;
int reAns = a*power(a,b-1);
return reAns;
}
int main()
{
    int a,b;
    printf("enter base: ");
    scanf("%d", &a);
    printf("enter power: ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d", p);
    return 0;
}