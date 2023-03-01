#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9};
    int *p=&a;
    for(int i=0;i<=10;i++)
    {
        printf("Value of a:%d\n%d\n",a[i],&a[i]);
    }
    for(int i=0;i<=10;i++)
    {
        printf("%d\t%d\n",*(p+i),p+i);
    }
}