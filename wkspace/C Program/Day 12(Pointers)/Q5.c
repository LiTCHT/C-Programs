//different datatypes
#include<stdio.h>
int main()
{
    int a=10;
    float f=1.5;
    char ch='B';
    void *p;
    p=&a;
    printf("%d\n",*(int *)p);
    p=&f;
    printf("%f\n",*(float *)p);
    p=&ch;
    printf("%c\n",*(char *)p);
}