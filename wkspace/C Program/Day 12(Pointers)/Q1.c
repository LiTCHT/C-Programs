//Declare a pointer
#include<stdio.h>
int main()
{
    int i,*j;

    j=&i;

    printf("The address of i = %u\n",&i);
    printf("The address of j = %u\n",j);
    printf("The address of i = %u\n",&j);
    return 0;
}