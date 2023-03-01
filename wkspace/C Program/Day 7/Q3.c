#include<stdio.h>
int main()
{
    int a,j,k,d,e;
    printf("Enter the value of a:");
    scanf("%d",&a);
    k=1<<6;
    printf("in binary form:");
    for(int i=7;i>=0;i--)
    {
        j=(a>>i)&1;
        d=(k>>i)&1;
        e=j^d;
        printf("%d",e);
    }
}