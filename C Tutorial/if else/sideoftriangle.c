#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st side :- ");
    scanf("%d", &a);
    printf("Enter 2st side :- ");
    scanf("%d", &b);
    printf("Enter 3st side :- ");
    scanf("%d", &c);
if((a+b)>c && (b+c)>a && (c+a)>b){
    printf("valid triangle");
}
else{
    printf("Invalid triangle");
}
return 0;
}