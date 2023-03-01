#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
    {
        int emp_no;
        float sal;
        char ename[10];
    };

    void display(struct employee emp[])
    {
        printf("%d")
        for (int i=0;i<2;i++)
        {
            scanf("%d %s %f", &emp[i].emp_no, emp[i].ename, &emp[i].sal);
        }
        for(int i=0;i<2;i++)
        {
            printf("%d %s %.2f\n", emp[i].emp_no, emp[i].ename, emp[i].sal);
        }
    }
int main()
{
    struct employee emp[2];
    display(emp);
}
