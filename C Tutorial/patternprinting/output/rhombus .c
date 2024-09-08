#include<stdio.h>
int main(){
    int n;
    printf("enter a number:- ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int l=1;l<=n;l++){
            printf(" *");
        }
        for(int k=1;k<=i-1;k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
        