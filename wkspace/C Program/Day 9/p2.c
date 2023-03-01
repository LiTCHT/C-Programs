#include<stdio.h>
float simple(int p,int t, int r);
int main()
{
    int p,t,r;
    for (int i=1;i<+3;i++)
    {
        printf("Enter the values of p,t,r:");
        scanf("%d%d%d",&p,&t,&r);
        printf("%f\n",simple(p,t,r));
    }
}
float simple(int p,int t,int r)
{
    float si;
    si=p*t*r/100;
    return si;
}