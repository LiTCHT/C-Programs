#include<stdio.h>
int (*func)(int,int);
int add(int,int);
int main()
{
     int a,b,res;
     printf("Enter two numbers");
     scanf("%d%d",&a,b);
     func=&add
     func=&sub
     func=&multi
     func=&div
}