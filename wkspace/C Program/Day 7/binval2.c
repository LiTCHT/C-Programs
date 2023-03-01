#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Binary form of the number a:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0X1;
        //printf("Position:%d\n",i);
        printf("%d",j);
    }
}