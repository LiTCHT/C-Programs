#include<stdio.h>
int main()
{
    int a,b;
    printf("Ënter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a<50)
    {
        printf("a is <50\n");
    }
    else if(a<b)
    {
        printf("a<b is true\n");
    }
    else if(a<50 && a<b)
    {
        printf("a<b and a<50\n");
    }
    else{
        printf("None of them is true\n");
    }
}