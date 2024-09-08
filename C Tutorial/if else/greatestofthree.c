#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter 1st number");
    scanf("%d", &a);
    printf("Enter 2st number");
    scanf("%d", &b);
    printf("Enter 3st number");
    scanf("%d", &c);
    if(a>b && a >c){
        printf("a is greater");
    }
    if(b>a && b>c){
        printf("b is greater");
    }
    if(c>a && c>b){
    printf("c is greater");
}
return 0;
}