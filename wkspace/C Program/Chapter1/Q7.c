#include<stdio.h>
int main()
{
    float sp,prof;

    printf("Enter the selling price of the product:");
    scanf("%f",&sp);

    printf("Enter the profit of the product:");
    scanf("%f",&prof);

    printf("The cost price of the product is:%f",(sp-prof)/15);
    return 0;
}