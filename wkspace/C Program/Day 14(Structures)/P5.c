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
    struct employee emp[3]={{10,50000,"Lexa"},{11,50000,"Lexa"},{12,50000,"Gudu"}};
    printf("%d\n%s\n%f\n",emp[2].emp_no,emp[2].ename,emp[2].sal);
}
