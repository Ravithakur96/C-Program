#include<stdio.h>
int main() {
    float Radius;
    float pi = 3.14;
    printf("Enter Radius :- ");
    scanf("%f" , &Radius);
    printf("Volume of Sphere is %f" ,4/3*pi*Radius*Radius*Radius);
    return 0;
}