#include<stdio.h>
#include<conio.h>
int main(){
    int num, count = 1,rem,sum;
    while(count <=500)
    {
    num = count;
    sum = 0;
    while(num)
    {
        rem = num%10;
        sum = sum + (rem *rem*rem);
        num = num /10;
    }
        if(count == sum){
    
    printf("%d is a armstrong number\n", count);
}
 count++;   
    }
    getch();
    return 0;
}

