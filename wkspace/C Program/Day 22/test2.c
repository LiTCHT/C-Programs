#include<stdio.h>
struct xyz{
    int a;
    char c;
    double d;
}tmp={10,'A',20.14};     //Here we are manually reserving the memory for the 3 bytes being wasted while declaring char
int main(){
    char *ptr=(double *)&tmp;
    printf("value of d is:%lf\n",*(double *)(ptr+8));
    printf("value of c is:%c\n",*(char *)(ptr+4));
    //printf("value of is:%d",*(double *)(ptr+9));
}