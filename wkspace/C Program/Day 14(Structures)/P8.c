#include<stdio.h>
#include<string.h>
struct employee
    {
        int emp_no;
        float sal;
        char ename[10];
    };
int main()
{
    struct employee emp[5];
    printf("Enter name, ID number, Salary");
    for(int i=0;i<2;i++)
    {
        scanf("%d %s %f\n",emp[i].ename,&emp[i].emp_no,&emp[i].sal);
    }
    for(int i=0;i<2;i++)
    {
        printf("Employee_name:%s ID:%d Salary:%f\n",emp[i].ename,emp[i].emp_no,emp[i].sal);
    }
}