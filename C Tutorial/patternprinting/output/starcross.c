#include<stdio.h>
int main(){
    int n;
    printf("enter a number:- ");
    scanf("%d",&n);
    int m;
    printf("enter a number:- ");
    scanf("%d", &m);
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i == j || i+j==n+1) printf("*");
       else printf(" ");
    }
    printf("\n");   
    }
    return 0;
}