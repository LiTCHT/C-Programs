#include<stdio.h>
int main()
{
    int a,b;
    printf("Ënter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a<50 && a<b){
        printf("Both are true");
    }
    else{
        printf("Both are false");
    }
}