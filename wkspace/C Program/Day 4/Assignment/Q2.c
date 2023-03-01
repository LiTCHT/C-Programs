#include<stdio.h>
int main()
{
    int sal, id, hrs;
    float amt;
    printf("Input the employees id:");
    scanf("%d",&id);
    printf("Input the working hours:");
    scanf("%d",&hrs);
    printf("Sal anount/hr:");
    scanf("%lf",&sal);
    sal = hrs*amt;
    printf("Employees id = %d\n",id);
    printf("Salary = U$ %d\n",sal);
    return 0;
}