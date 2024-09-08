#include<stdio.h>
int main(){
    int n;
    printf("enter percentage :- ");
    scanf("%d",&n);
 // more than 80 -> A
 // more than 60 -> B
 // more than 40 -> C
 // more than 20 -> D
 if(n>80){
    printf("A grade");
 }
 if(n>60){
    printf("b grade");
 }
 if(n>40){
    printf("c grade");
 }
 if(n>20){
    printf("D grade");
 }
 return 0;
}