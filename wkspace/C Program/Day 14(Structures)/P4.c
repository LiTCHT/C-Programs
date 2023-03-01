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
    struct employee emp1={10,50000,"Alex"};
    printf("%d\n%s\n%f\n",emp1.emp_no,emp1.ename,emp1.sal);
}