//c program to display fibonacci sequence, The fibonacci sequence: 0,1,1,2,3,5,8,13,21

#include<stdio.h>
int main()
{
    int i,n;
    int t1 = 0, t2 = 1;
    int nextterm = t1 + t2;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series: %d, %d, ",t1,t2);

    for(i=3; i<=n; ++i)
    {
        printf("%d, ",nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return 0;
}