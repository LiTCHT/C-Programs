#include<stdio.h>
int main()
{
    double first,second,temp;
    printf("Enter the first number:");
    scanf("%lf",&first);
    printf("Enter the seccond number:");
    scanf("%lf",&second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping, first number = :%.2lf\n",first);
    printf("After swapping, second number = :%.2lf",second);
    return 0;
}