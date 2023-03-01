/*
C-program to swap two numbers without using third variable
*/

#include<stdio.h>
int main()
{
    int x = 10,y = 5;
    x = x*y;
    y = x/y;
    x = x/y;

    printf("After swapping: x = %d, y = %d",x,y);
    return 0;
}