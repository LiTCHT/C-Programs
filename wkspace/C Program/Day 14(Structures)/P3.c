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
    struct employee emp1,emp2,emp3;
    emp1.emp_no=10;
    (strcpy(emp1.ename,"Alex"));
    emp1.sal=50000;
    printf("%d\n%s\n%f\n",emp1.emp_no,emp1.ename,emp1.sal);
}