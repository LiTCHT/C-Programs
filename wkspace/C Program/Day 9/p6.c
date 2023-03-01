#include<stdio.h>
#include<math.h>
int power(int x,int y,int z);
int main()
{
    int a,b,c;
    printf("Enter the value of base(x) and power(y and z):");
    scanf("%d%d%d",&a,&b,&c);
    printf("The solution is:%d",power(a,b,c));
}
int power(int x,int y,int z)
{
    return pow(x,y+z);
}