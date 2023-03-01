#include<stdio.h>
int main()
{
    int z,y;
    printf("Enter a number:");
    scanf("%d",&y);
    z=y%2==0?printf("%d is even number",y):printf("%d is odd number",y);
}