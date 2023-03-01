#include<stdio.h>
int main()
{
    int a,j,count=0;
    printf("Enter an integer to find it's binary:\n");
    scanf("%d",&a);
    for(int i=7;i>=0;i--)
    {
        j=(a>>i) & 0X1;
        if(j==1)
        {
            count++;
        }
        printf("%d",j);
    }
    printf("\n%d",count);
}