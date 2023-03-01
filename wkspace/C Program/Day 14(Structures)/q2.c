#include<stdio.h>
void add(int *a,int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int num1,num2,sum;
    printf("Enter the first number and second number:");
    scanf("%d %d",&num1,&num2);

    add(&num1, &num2, &sum);
    printf("Sum of %d and %d is %d",num1,num2,sum);
    return 0;
}