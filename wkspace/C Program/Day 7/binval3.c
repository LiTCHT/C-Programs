#include<stdio.h>
int main()
{
    int i,j1,j2,a,b,j3;
    printf("\nEnter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("\nBinary form of the number a:\n");
    printf("\nBinary form of the number b:\n");
    for(i=7;i>=0;i--)
    {
        j1=(a>>i) & 0X1;
        j2=(b>>i) & 0X1;

        printf("%d\n",i);

        printf("%d\n",j1,j2);
        j3 = j1 & j2;
        printf("The product is:%d\n",j3);
    }
    return 0;
}