/*

*/

#include<stdio.h>
int a=10;
int main()
{
    int a=20;
    printf("Value of a is: %d\n",a);
    {
        int a=30;
        printf("value of a is: %d\n",a);
    }
    printf("value of a is: %d\n",a);
}