#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price:-");
    scanf("%d", &cp);
    int sp;
    printf("Enter sold price");
    scanf("%d", &sp);
    if(cp<sp){
    printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("no profit , no loss");
    }
     return 0;
}