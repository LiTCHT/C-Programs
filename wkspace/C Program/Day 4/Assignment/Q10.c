#include<stdio.h>
int main()
{
    int inttype;
    char chartype;
    float floattype;
    double doubletype;
    printf("Size of int:%zu bytes\n", sizeof(inttype));
    printf("Size of char:%zu bytes\n", sizeof(chartype));
    printf("Size of float:%zu bytes\n", sizeof(floattype));
    printf("Size of double:%zu bytes\n", sizeof(doubletype));

    return 0;
}