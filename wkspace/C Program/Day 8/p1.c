#include<stdio.h>
int main()
{
    int a=10;
    //printf("Value of a is:%d\n",a++);
    sizeof(a++);
    printf("%d\n",a);
}