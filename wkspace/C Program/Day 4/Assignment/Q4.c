#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the two integers:");
    scanf("%d%d",&n1,&n2);
    if(n1%n2==0)
    {
        printf("multiplied");
    }
    else{
        printf("Not multiplied");
    }
}