//user data
#include<stdio.h>
int main()
{
    int a[5],n,i;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=0;i<=(n-1);i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-1);i++)
    {
        printf("Elements are:%d\n",a[i]);
    }
}