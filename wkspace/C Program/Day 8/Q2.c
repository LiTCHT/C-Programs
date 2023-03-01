#include<stdio.h>
#include<math.h>
int main()
{
    float r1,r2;
    float a,b,c,d;
    printf("Enter the numbers a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d = sqrt(b*b-(4*a*c));

    if(d<0)
    {
    r1 = (-b+d)/2*a;
    r2 = (-b-d)/2*a;
    printf("The roots are:%f%f",r1,r2);
    }
    else if(d==0)
    {
        r1 = -b/2*a;
        r2 = -b/2*a;
        printf("The roots are equal and are:%f%f",r1,r2);
    }
    else
    {
        r1 = -b/2*a;
        r2 = -b/2*a;
    }
}