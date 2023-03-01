#include<stdio.h>
int main()
{
    int a;
    printf("Ënter a 4 digit number a:\n");
    scanf("%d",&a);
    float s;
    s=(((a+8)/3)%5)*5;
    printf("%f\n",s);
}