#include<stdio.h>
int main(){
    int Year;
    printf("enter Year");
    scanf("%d",&Year);

    if(Year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}