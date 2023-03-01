#include<stdio.h>
int main()
{
    int salary;
    float gross_sal;

    printf("Enter the basic salary of Ramesh:");
    scanf("%d",&salary);

    gross_sal=salary+(salary*0.4)+(salary*0.2);

    printf("%f is the gross salary of Ramesh",gross_sal);
    return 0;
}