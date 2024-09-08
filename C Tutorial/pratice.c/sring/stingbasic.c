#include<stdio.h>
int main(){
    int  a[4] = {1,2,3,4};
       printf("%p\n",&a[0]);
       printf("%p\n",&a[1]);
       printf("%p\n",&a[2]);
       printf("%p\n",&a[3]);
       char arr[5] = {'a','t','l','a','s'};
       printf("%p\n",&arr[0]);
       printf("%p\n",&arr[1]);
       printf("%p\n",&arr[2]);
       printf("%p\n",&arr[3]);
       printf("%p\n",&arr[4]);
       printf("%p\n",&arr[5]);
       return 0;

}