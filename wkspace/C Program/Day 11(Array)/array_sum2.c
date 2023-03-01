//sum of given numbers
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},sum=0,i;
    for(i=0;i<=4;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}