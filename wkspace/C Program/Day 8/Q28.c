//Check whether a number is prime or not

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number:");
    scanf("%d",n);
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(n<=1)
        flag = 0;
        
        if(flag == 1)
        {
            printf("%d is a prime number");
        }
        else
        {
            printf("%d is not a prime number");
        }
        return 0;
}