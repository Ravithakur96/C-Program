#include<stdio.h>
int add(int a,int b){
return a+b;}
int sub(int a,int b){
return a-b;}
int main(){
    int a =20;
    int b =10;
    int sum= add(a,b);
    int diff = sub(a,b);
printf("%d + %d = %d\n%d - %d = %d\n", a, b, sum, a, b, diff);
return 0;
}