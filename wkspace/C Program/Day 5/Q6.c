#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 5 digit number a:\n");
    scanf("%d",&c);
    int i=0;
    int count=0;
    while(i<5)
    {
        c=c/10;
        count++;
        if(count==1)
        {
            a=c%10;
        }
        else if(count==4)
        {
            b=c%10;
        }
    i++;
    }
    printf("sum is:%d",a+b);
    return 0;
}