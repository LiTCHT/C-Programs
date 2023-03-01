#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter the temperature in F:");
    scanf("%f",&F);

    C=(F-32)*100/180;
    printf("\n%f is the temperature in celcius",C);
    return 0;
}