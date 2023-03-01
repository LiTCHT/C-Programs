//greatest of 3 values
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the greatest\n",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is the greatest\n",c);
    }
}