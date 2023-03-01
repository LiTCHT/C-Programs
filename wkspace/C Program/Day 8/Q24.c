//Count number of digits in an integer

#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in the integer is:%d",count);
    return 0;
}