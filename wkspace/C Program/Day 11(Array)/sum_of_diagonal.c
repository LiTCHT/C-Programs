//display diagonal
#include<stdio.h>
int main()
{
    int i,a[3][3];
    for(i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("Enter the values of matrix a:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
    for(int j=0;j<=2;j++)
    {
    if(i==j)
        {
        printf("%d\t",a[i][j]);
        }
    }
        printf("\n");
    }
}