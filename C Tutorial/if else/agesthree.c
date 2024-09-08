#include <stdio.h>
int main()
{
    int ram;
    int shyam;
    int ajay;
    printf("Enter 1st age");
    scanf("%d", &ram);
    printf("Enter 2st age");
    scanf("%d", &shyam);
    printf("Enter 3st age");
    scanf("%d", &ajay);
    if(ram>shyam && ram >ajay){
        printf("ram is greater");
    }
    if(shyam>ram && shyam>ajay){
        printf("shyam is greater");
    }
    if(ajay>ram && ajay>shyam){
    printf("ajay is greater");
}
return 0;
}