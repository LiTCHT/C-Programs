#include<stdio.h>
int main()
{
    int x;
    printf("Input an integer:");
    scanf("%d",&x);

    if(x == 0)
    {
        printf("positive\n");
    }
    else if(x<0&&(x%2)!==0)
    {
        printf("Negative odd\n");
    }
    else if(x<0&&(x%2)==0)
    {
        printf("Negative even\n");
    }
    else if(x>0&&(x%2)!=0)
    {
        printf("Positive odd\n");
    }
    else if(x>0&&(x%2)==0)
    {
        printf("Positive Even\n");
    }
}