#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,D;
    printf("Enter the value of x1:- ");
    scanf("%f",&x1);
    printf("Enter the value of x2:- ");
    scanf("%f",&x2);
    printf("Enter the value of y1:- ");
    scanf("%f",&y1);
    printf("Enter the value of y2:- ");
    scanf("%f",&y2);
    D = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
     float Distance = sqrt(D);
     printf("%f",Distance);
     return 0;
}