//addition of two matrix
#include<stdio.h>
int main()
{
    int i,a[3][3],b[3][3];
    for(i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("Enter the values of matrix a:");
            scanf("%d",&a[i][j]);
            printf("Enter the values of matrix b:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
    for(int j=0;j<=2;j++)
        {
        printf("%d\t",b[i][j]+a[i][j]);
        }
        printf("\n");
    }
}