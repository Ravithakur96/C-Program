#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Divident :- ");
    scanf("%d", &a);
    printf("Enter Divisor :- ");
    scanf("%d", &b);
    int q = a/b;
    int r = a - b*q; // Divisor * Quotient + Remainder = Divident
 
 printf("The Remainder when %d is divided by %d is : %d is :- ",a,b,r);
}