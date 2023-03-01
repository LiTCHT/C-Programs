//factorial of a number

#include<stdio.h>
int  main()
{
    int fact=1,num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;++i)
    {
        fact=fact*i;
    }
    printf("Factorial is:%d",fact);
}