#include<stdio.h>
int main()
{
    float l,b,r;

    printf("Enter the length and breadth of the rectangle:");
    scanf("%f%f",&l,&b);

    printf("The area is %f\n",l*b);
    printf("The circumference is %f\n",l+b);

    printf("Enter the radius of the circle:");
    scanf("%f",&r);

    printf("The area is %f\n",3.14*r*r);
    printf("The circumference is %f\n",2*3.14*r);
    return 0;
}