#include<stdio.h>
int main()
{
    float a,b,c,d,e;

    printf("Marks obtained in subject a,b,c,d,e:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    printf("\n%f is the aggregate marks obtained",a+b+c+d+e);
    printf("\n%f is the precentage of marks obtained",(a+b+c+d+e)/5);
    return 0;
}