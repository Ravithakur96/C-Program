#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:- ");
    scanf("%d",&n);
    float sum = 0;
    for(float i = 1;i<=n;i++){
        float k = 1/i;
        sum = sum + k;
    }
    printf("%f",sum);
    return 0;
}

