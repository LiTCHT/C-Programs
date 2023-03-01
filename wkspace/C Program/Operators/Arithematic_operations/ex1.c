/*
The problem explains arithematic operations
Usage: operator - '+','-','*','/','%'
Syntax: operand operator operand - a+b 
*/
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("The sum is: %d\n",z);
    z=x-y;
    printf("The difference is: %d\n",z);
    z=x*y;
    printf("The product is: %d\n",z);
    z=x/y;
    printf("The division is: %d\n",z);
    z=x%y;
    printf("The modulus is: %d\n",z);
    return 0;

}