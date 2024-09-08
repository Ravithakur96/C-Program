#include<stdio.h>
int main(){
    int n;
    printf("enter no of rowws:- ");
    scanf("%d",&n);
    int m;
    printf("enter no of coloumn:- ");
    scanf("%d",&m);
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=m;j++){
           if(i == 1 || i==n || j ==1 || j==m)
             printf("* ");
       else printf("  ");
    }
    printf("\n");
    }
    return 0;
}