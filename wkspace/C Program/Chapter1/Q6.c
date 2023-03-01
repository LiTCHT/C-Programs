#include<stdio.h>
int main()
{
    int c,d,t;

    printf("Enter a value in c:");
    scanf("%d",&c);

    printf("Enter the value in d:");
    scanf("%d",&d);

    c=c+d;
    c=c-d;
    d=c-d;

    printf("The value of c is:%d",c);
    printf("The value of d is:%d",d);
    getch();
}