#include<stdio.h>
int main()
{
    int a;

    if(a%sizeof(a)==0)
    {
    printf("Aligned Memory");
    }
    else
    {
        printf("Unaligned Memory");
    }
}