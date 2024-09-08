#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :-");
    scanf("%d",&n);
    // ternary operator
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("Even number") : printf("odd number");
//     //if(n%2=0){
//     //  printf("Even number")
// }
//     //else{ 
//     // printf("odd number");
// }
return 0;
}