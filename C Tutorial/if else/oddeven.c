#include<stdio.h>
int main(){
    int x;
    printf("enter number :-");
    scanf("%d",&x);

    if (x%2==0) {
        printf("even number");
    }
else {
        printf("odd number");
    }
    return 0;
}