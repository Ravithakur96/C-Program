// #include<stdio.h>
// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 2; i <= x; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int conbination(int n, int r)
// {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     return ncr;
// }
// int main()
// {
//     int n;
//     printf("enter the value of n:- ");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             int icj = combination(i, k);
//             printf(" %d", icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch = 66;
// printf("%c",ch);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the value of n:- ");
// scanf("%d",&n);
// for(int i = 1;i<= n;i++){
//     for(int j =1;j<=i;j++){
//         printf("* ");
//     }
//     printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     float pi = 3.14;
//     float radius = 3;
//     printf("%f",pi*radius*radius);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n = 10;
//     int mul = 0;
//     for(int i = 1;i<=n;i++){
//         mul = 5+mul;
//         printf("%d  ",mul);
//     }
// }

// #include<stdio.h>
// int add(int a,int b){
// return a+b;}
// int sub(int a,int b){
// return a-b;}
// int main(){
//     int a =20;
//     int b =10;
//     int sum= add(a,b);
//     int diff = sub(a,b);
// printf("%d + %d = %d, %d - %d = %d\n", a, b, sum, a, b, diff);
// return 0;
// }

// #include<stdio.h>
// int main(){
// float a,b,c,x;
// printf("enter the vlue of a:- ");
// scanf("%f",&a);
// printf("enter the vlue of b:- ");
// scanf("%f",&b);
// printf("enter the vlue of c:- ");
// scanf("%f",&c);
// x =a/(b-c);
// printf("%f",x);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     float C,F;
//     printf("enter the value of C:- ");
//     scanf("%f",&C);
//     F = ((9*C)/5)+32;
//     printf("%f",F);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float x1,x2,y1,y2,D;
//     printf("Enter the value of x1:- ");
//     scanf("%f",&x1);
//     printf("Enter the value of x2:- ");
//     scanf("%f",&x2);
//     printf("Enter the value of y1:- ");
//     scanf("%f",&y1);
//     printf("Enter the value of y2:- ");
//     scanf("%f",&y2);
//     D = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
//      float Distance = sqrt(D);
//      printf("%f",Distance);
//      return 0;
// }

// #include<stdio.h>
//  int main(){
//  int n;
//  printf("enterr the n :- ");
//  scanf("%d",&n);
//  int  even = 1;
//   for (int i =0;i<=n;i++){
//     even = 2*i+1;
//     printf(" %d ", even);
//   }
//   return 0;
//  }

// #include<stdio.h>
// int main(){
//     float a;
//     float b;
//     printf("Enter the value of a:- ");
//     scanf("%f",&a);
//      printf("Enter the value of b:- ");
//     scanf("%f",&b);
//     float c = a/b;
//     printf("%f",c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float rupee = 15.95;
//     float paise;
//     for (int i = 100; i <= 100; i++)
//     {
//         paise = i * rupee;
//         printf("%4.0f", paise);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int x,y,z;
// printf("enter the value of x:- ");
// scanf("%d",&x);
// printf("enter the value of y:- ");
// scanf("%d",&y);
// z =x+y;
// printf("%d",z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// float r,h,Area;
// float pi = 3.1416;
// printf("enter the value of r:- ");
// scanf("%f",&r);
// printf("enter the value of h:- ");
// scanf("%f",&h);
// Area = (pi*r*r)+(2*pi*r*h);
// printf("Area %f",Area);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     float b ;
//     b =15.25+-5.0;
//     printf("%f",b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,a;
//     printf("enter value n");
//     scanf("%d", &n);
//     printf("enter any integer value");
//     scanf("%d", &a);
//     int r,sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         r = a % 10;
//         sum = sum + r;
//         a = a / 10;
//     }
//     printf("The sum of digits %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int intType;
//     float floatType;
//     double doubleType;
//     char charType;
//     // sizeof evaluates the size of a variable
//     printf("Size of int: %zu bytes\n", sizeof(intType));
//     printf("Size of float: %zu bytes\n", sizeof(floatType));
//     printf("Size of double: %zu bytes\n", sizeof(doubleType));
//     printf("Size of char: %zu byte\n", sizeof(charType));
//     return 0;
// }

// #include<stdio.h> //// size of datatype
// int main() {
//     int k = sizeof(char);
//     // sizeof evaluates the size of a variable
//     printf("Size of int: %d bytes\n", k);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      char answer;
//      printf("Would you like to know my name?\n");
//      printf("Type Y for YES and N for NO :- ");
//      answer = getchar();
//      if(answer == 'Y' || answer == 'y')
//      printf("\n\nMy name is BUSY BEE");
//      else
//      printf("you are not good for nothing");
//      return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//  char character;
//  printf("Press any key\n");
//  character = getchar();
//  if (isalpha(character)>0)
//  printf("The character is a letter");
//  else if(isdigit(character)>0)
//  printf("The character is a digit");
//  else
//  printf("The character is not alphanumeric");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int n;
//      printf("enter the n :- ");
//      scanf("%d",&n);
//      for(int i = 1;i<= n;i++){
//         for(int j =1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//      }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the n :- ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n - i+1;j++){
//         printf("*");
//     }
//     printf("\n");
//     }
//     for(int i= 1;i<=n;i)
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float n; // declaring a float number
//     printf("Enter the value of n:- ");
//     scanf("%f",&n);
//     int roundedn = round(n); // applying the round() function
//     printf("%d\n",roundedn); // printing the final output
//     return 0;
// }

// #include<stdio.h>
// int main(){
// // int n,m;
// // printf("Enter the value of n:- ");
// //     scanf("%d",&n);
// //     printf("Enter the value of m:- ");
// //     scanf("%d",&m);
//     int k,l,sum;
//     k=45*7;
//     l=45*3;
// sum = k+l*10;
//     printf("the multiplication  k is %d, l is %d and sum is %d",k,l,sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("Name     code      price\n");
//     printf("Fan       67831    1234.50\n");
//     printf("Motor     450      5786.70\n");
//     return 0;
// }

// #include<stdio.h> ////error
// int main(){
//     int code1,code2;
//     float price1,price2;
//     char name1[10],name2[10];
//     printf("Enter first name ,code and price :");
//     scanf("%s%d%f",name1,&code1,&price1);
//     printf("Enter second name ,code and price :");
//     scanf("%s%d%f",name2,&code2,&price2);
//     printf("Name\tCode\tPrice\n");
//     printf("%-s\t%-d\t%.2f\n",name1,code1,price1);
//     printf("%-s\t%-d\t%.2f\n",name2,code2,price2);
//     return 0;
//     }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rowws:- ");
//     scanf("%d",&n);
//     int m;
//     printf("enter no of coloumn:- ");
//     scanf("%d",&m);
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<=m;j++){
//             if(i ==1 || i ==n || j==1 || j==m)
//             printf("S ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
//         return 0;
//     }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rowws:- ");
//     scanf("%d",&n);
//     int m;
//     printf("enter no of coloumn:- ");
//     scanf("%d",&m);
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<=m;j++){
//             if(i ==(n/2)+1 && j==(m/2)+1)
//             printf("O ");
//             else
//             printf("S ");
//         }
//         printf("\n");
//     }
//         return 0;
//     }

// #include<stdio.h>  ////difficult
// int main()
// {
// int row,column;
// for(row=1;row<=15;row++)
// {
// for(column=1;column<=18;column++)
// {
// if(row==2&&column>2&&column<17)
// printf("-");
// else
// if(row==3&&column>9&&column<17)
// printf("-");
// else
// if(row>3&&row<7&&column>4)
// printf(" ");
// else
// if(row==7&&column>5&&column<14)
// printf("-");
// else
// if(row>7&&row<10&&column<14)
// printf("-");
// else
// if(row>9&&row<13&&column<14)
// printf(" ");
// else
// if(row==13&&column>4&&column<14)
// printf("-");
// else
// if(row == 14&&column>3&&column<14)
// printf("-");
// else
// if(row==15&&column>2&&column<14)
// printf("-");
// else
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// #include <math.h>
// #define PI 3.1416
// #define MAX 180
// int main()
// {
//     int angle;
//     float x, y;
//     angle = 0;
//     printf("           angle         sin(angle)\n\n");
//     while (angle <= MAX)
//     {
//         x = (PI / MAX) * angle;
//         y = sin(x);
//         printf("%15d %15.4f\n", angle, y);
//         angle = angle + 15;
//     }
//     return 0;
// }

// #include<stdio.h>
// int factorial(int n)
// {
//     if (n == 1 || n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     int fact = factorial(n);
//     printf("%d", fact);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=2;
//     int b =2;
//     printf("%d",a*b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;//a =5,b=3
//     printf("enter the a:- ");
//     scanf("%d",&a);
//     printf("enter the b:- ");
// scanf("%d",&b);
// a = a-b;
// b = a+b;
// a = b-a;
// printf("new value of a :- %d new value of b :- %d",a,b);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:- ");
//     scanf("%d",&n);
//     int fact =1;
//     for(int i =1;i<= n;i++){
//     fact = fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the n:- ");
//     scanf("%d",&n);
//     int mul;
//     for(int i = 1;i<=n;i++){
//         mul = 5*i;
//         printf("%d\n",mul);
//     }
//     return 0;
// }

// #include<stdio.h>
// void helloworld(int n){
// if(n==0) return;
// helloworld(n-1);
// printf("Hello world \n");
// return;
// }
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     helloworld(n);
//     return 0;
// }

// #include<stdio.h>
// int combination(int n){
//     if(n<=1) return 1;
//     return n*combination(n-1);
// }
// int main(){
// int n;
// printf("Enetr a number:- ");
// scanf("%d",&n);
// int comb = combination(n);
//  printf("%d\n",comb);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int n,r;
// printf("ENTER A NUMBER n :- ");
// scanf("%d",&n);
// printf("ENTER A NUMBER  r :- ");
// scanf("%d",&r);
// int ncr = n/(r*(n-r));
// printf("%d",ncr);
//     return 0;
// }

// #include<stdio.h>
// #include <math.h>
// #define PI 3.1416
// #define MAX 180
// int main()
// {
//     int angle;
//     float x, y;
//     angle = 0;
//     printf(" angle  Cos(angle)\n\n");
//     while (angle <= MAX)
//     {
//         x = (PI / MAX) * angle;
//         y = cos(x);
//         printf("%15d %13.4f\n", angle, y);
//         angle = angle + 10;
//     }
// }

// #include<stdio.h>
// void namaste();
// void banjour();
// int main(){
//     char ch;
//     printf("Enter i for indian and f for french");
//     scanf("%c",&ch);
//     if(ch == 'i'){
//         namaste();
//     }
//     else{
//         banjour();
//     }
// }
// void namaste(){
//     printf("namaste\n");
// }
// void banjour(){
//     printf("banjour");
// }

// #include<stdio.h>
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     printf("enter a and b ");
//     scanf("%d %d",&a,&b);
//     int add = sum(a,b);
//     printf("%d",add);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number ");
//     scanf("%d", &n);
//     int mul = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d * %d = %d\n", mul, i, i * mul);
//     }
//     return 0;
// }

// #include<stdio.h>
// #define PI 3.1416
// int main(){
//     float radius;
//     printf("Enter radius");
//     scanf("%f",&radius);
//     printf("%f",PI*radius*radius);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("%f",pow(2,5));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch = 98;
//     printf("%c",ch);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day :- ");
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1:
//     printf("monday");
//     break;
//     case 2:
//     printf("tuesday");
//     break;
//     case 3:
//     printf("wednesday");
//     break;
//     case 4:
//     printf("thrusday");
//     break;
//     case 5:
//     printf("friday");
//     break;
//     case 6:
//     printf("saturday");
//     break;
//     case 7:
//     printf("sunday");
//     break;
//     default : printf(" not a valid day");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 11;
// if (a == 11){
// printf("i am eleven");
// }
// else
// printf("a am not eleven");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int physics,chemistry,maths,total;
//     printf("enter physics marks ");
//     scanf("%d",&physics);
//     printf("enter chemistry marks ");
//     scanf("%d",&chemistry);
//     printf("enter maths marks ");
//     scanf("%d",&maths);
//     total = (physics *maths *chemistry)/3;
//     if(total<40 || chemistry<33 || maths <33 || physics < 33){
//         printf("fail");
//     }
// else{
// printf("pass");
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int income =0;
//     printf("enter the income slab :- ");
//     scanf("%d",&income);
//     if(income< 250000)
//     printf("No tax ");
//     else if(income>250000 &&income<500000 )
//     printf("5 percent tax");
// else if (income>500000 && income<1000000)
// printf("20 percent tax");
// else
// printf("30 percent tax");
//     return 0;
// }

// #include<stdio.h>  //GAME GENERATE BY RAVI
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     int number,guess,nguesses=1;
//     srand(time(0));
//     number = rand()%100 +1;
//     // printf("the number is %d\n",number);
//     do{
//         printf("Guess the number between 1 to 100 ");
//         scanf("%d",&guess);
//         if(guess>number){
//             printf("lower number please\n");
//         }
//         else if(guess<number){
//             printf("higher numer please\n");
//         }
//          else{
//             printf("you guessed it in %d\n", nguesses);
//          }
//          nguesses++;
//     }
//     while (guess!=number);
//     return 0;
// }

// #include<stdio.h>
// void goodmorning();
// void goodevening();
// void goodnight();
// int main()
// {
//     goodmorning();
//     goodevening();
//     goodnight();
//     return 0;
// }
// void goodmorning()
// {
//     printf("goodmornig\n");
// }
// void goodevening()
// {
//     printf("goodevening\n");
// }
// void goodnight()
// {
//     printf("goodnight\n");
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :- ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//        printf("%d",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int exchange(int a, int b)
// {
//     a = a - b;
//     b = a + b;
//     a = b - a;
//     printf("%d %d", a, b);
//     return 0;
// }
// int main()
// {
//     int a, b;
//     printf("Enter a :- ");
//     scanf("%d", &a);
//     printf("Enter b :- ");
//     scanf("%d", &b);
//     exchange(a, b);
//     return 0;
// }

// #include<stdio.h>
// int leapyear(int year){
//     if(year%4 == 0) printf("leap year");
//     else printf("not leap year");
//     return 0;
// }
// int main(){
//     int year;
//     printf("Enter year");
//     scanf("%d",&year);
//     leapyear(year);
//     return 0;
// }

// #include<stdio.h>
// void greet()
// {
//     printf("good mornimg\n");
//     printf("how are you?\n");
//     printf("i am fine\n");
//     printf("and you??\n");
//     printf("i am also fine\n");
//     return;
// }
// int main()
// {
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     greet();
//     return 0;
// }

// #include<stdio.h>
// void greet()
// {
//     printf("good mornimg\n");
//     printf("how are you?\n");
//     printf("i am fine\n");
//     printf("and you??\n");
//     printf("i am also fine\n");
//     return;
// }
// int main()
// {
//     greet();
//     return 0;
// }

// #include<stdio.h>
// #include <math.h>
// void area(float a, float b, float c)
// {
//     float s = (a + b + c) / 2;
//     float root = sqrt(s * (s - a) * (s - b) * (s - c));
//     printf("%f\n", root);
//     return;
// }
// void perimeter(float a, float b, float c)
// {
//     float p = a + b + c;
//     printf("%f", p);
//     return;
// }
// int main()
// {
//     float a, b, c;
//     printf("enter side a :- ");
//     scanf("%f", &a);
//     printf("enter side b :- ");
//     scanf("%f", &b);
//     printf("enter side c :- ");
//     scanf("%f", &c);
//     area(a, b, c);
//     perimeter(a, b, c);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         if(i%2==0)
//         printf("%d even\n",i);
//         else
//         printf("%d odd\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number :- ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("Ravi ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numer :- ");
//     scanf("%d",&n);
//     for (int i = 0; i <=n; i++)
//     {
//      printf("Ravi ");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter Number :- ");
// scanf("%d",&n);
// printf("The Number is %d",n);
//     return 0;
// }

// #include <stdio.h> //// size of datatype
// int main()
// {
//     int k = sizeof(int);
//     // sizeof evaluates the size of a variable
//     printf("Size of int: %d bytes\n", k);
//     return 0;
// }

//*#include<stdio.h>
//int main(){
  //  int arr[6] = {4,5,8,6,3,2};
    //printf("%p\n",arr[0]);
//printf("%p\n",arr[1]);
//printf("%p\n",arr[2]);
//printf("%p\n",arr[3]);
//printf("%p\n",arr[4]);
//printf("%p\n",arr[5]);
//return 0;
//}

/*#include<stdio.h>
int main(){
int arr[5];
 for(int i = 0;i<5;i++){
  printf("enter %d number :- ",i+1);
  scanf("%d",&arr[i]);
 }
for(int i = 0;i<5;i++){
  printf("%d",arr[i]);
}
  return 0;
} 
*/

 /*#include<stdio.h>
 int main(){
  int marks[10] = {95,90,31,25,100,50,65,89,97,30};
  for (int i = 0; i < 10; i++)
  {
    if(marks[i]<35){
      printf("%d ",i);
    }
  }
  
return 0;
 }*/

/* #include<stdio.h>
 int main(){
  int a = 'A';
  int x = 23;
  float y = 12.03;
  float z = 2.30;
printf("%c is stored in address :- %p\n", a ,&a);
printf("%d is stored in address :- %p\n", x ,&x);
printf("%f is stored in address :- %p\n", y ,&y);
printf("%f is stored in address :- %p\n", z ,&z);
return 0;
 }*/

/*#include<stdio.h>
int main(){
   int arr[5] = {1,1,2,1,1};
   printf("%p\n",&arr[0]);
   printf("%p\n",&arr[1]);
   printf("%p\n",&arr[2]);
   printf("%p\n",&arr[3]);
   printf("%p\n",&arr[4]);
   return 0;
}*/

/*#include<stdio.h>
void fun(int x[]){
  int temp  = x[0];
  x[0] = x[1];
  x[1] = temp;
  return;
}
int main(){
  int arr[2] = {2,9};
  printf("%d %d\n",arr[0],arr[1]);
  fun(arr);
  printf("%d %d\n",arr[0],arr[1]);
  return 0;
}*/

/*#include<stdio.h>
int main(){
  int arr[6] = {1,5,5,7,9,11};
  int sumeven = 0;
  int sumodd = 0;
  for(int i = 0;i<=6;i++){
if(i%2==0){
  sumeven +=arr[i];
}
else{
  sumeven += arr[i];
}
  }
printf("%d",sumeven-sumodd);
return 0;
}*/

#include<stdio.h>
int main(){
  int pair[8] = {1,2,3,4,5,6,7,8};
  int sum = 12;e
  int totalpairs = 0;
  for(int i = 0;i<= 7;i++){
    for(int j = i+1;j<=7;j++){
      for(int k = j+1;k<=7;k++){
      if(pair[i]+pair[j]+pair[k] == sum){
        totalpairs++;
        printf("{%d,%d,%d) \n", pair[i] , pair[j],pair[k]);
      }
  }
}
  }
      printf("%d",totalpairs);
  return 0;
} 