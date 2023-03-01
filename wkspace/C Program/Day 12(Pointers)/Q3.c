//arithematic
#include<stdio.h>
int add(int *,int *);
int sub(int *, int *);
int multi(int *,int *);
int div(int *,int *);
int main()
{
    int a,b;

    printf("Enter the two numbrs:");
    scanf("%d %d",&a,&b);
    printf("The sum of the values is = %d\n",add(&a,&b));
    printf("The sub of the values is = %d\n",sub(&a,&b));
    printf("The multi of the values is = %d\n",multi(&a,&b));
    printf("The div of the values is = %d\n",div(&a,&b));

}

int add(int *y,int *z)
{
    return *y + *z;
}
int sub(int *y, int *z)
{
    return *y - *z;
}
int multi(int *y,int *z)
{
    return *y * *z;
}
int div(int *y,int *z)
{
    return *y / *z;
}