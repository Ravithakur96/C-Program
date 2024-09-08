#include<stdio.h>
int main() {
int x; 
    printf("enter number:- ");
    scanf("%d",&x);

    if(x%5==0){
        printf("divisible");
    }
    else{
        printf("not divisibe");
    }
    return 0;
}