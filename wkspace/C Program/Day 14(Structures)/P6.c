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
    struct employee emp[3]={{10,50000,"Lexa"},{11,50000,"Alex"},{12,50000,"Gudu"}};
    for(int i=0;i<5;i++)
    {
    printf("%d\n%s\n%f\n",emp[i].emp_no,emp[i].ename,emp[i].sal);
    }
}
