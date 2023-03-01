#include<stdio.h>
int add(int *,int *);
int main()
{
    int a=5,b=6;

    printf("The two numbers are 5 and 6\n");
    printf("The sum of the values is = %d",add(&a,&b));
}

int add(int *y,int *z)
{
    return *y+*z;
}