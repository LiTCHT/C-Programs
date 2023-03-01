#include<stdio.h>
void printBinary(int n)
{
    int i;
    for(i=7;i>=0;i--)
    {
        if (n&(1<<i))
        printf("1");
        else
        printf("0");
    }
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Binary representation is:");
    printBinary(num);
    return 0;
}