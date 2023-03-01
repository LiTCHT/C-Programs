#include<stdio.h>
int add(int *,int *);
int main()
{
    int a,b;

    printf("Enter the two numbrs:");
    scanf("%d %d",&a,&b);
    printf("The sum of the values is = %d",add(&a,&b));
}

int add(int *y,int *z)
{
    return *y+*z;
}