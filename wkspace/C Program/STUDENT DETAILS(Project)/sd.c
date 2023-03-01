#include <stdio.h>//defining the library
struct student//declaring the structure
{
    char name[50];
    int roll;
    float marks;
} student;

int main()
{
    int i,n;//declaring a varible in the inside the main function
    struct student s[100];
    printf("Enter total of students:");
    scanf("%d",&n);
    //accepting the numbers of student roll number marks
    for(i=0;i<n;i++)
    {
        printf("\n Enter information of student %d:\n",i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    //displaying the student details
    printf("Displaying Information:\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d no. student info\n",i+1);
        printf("\t Name:%s\n ",s[i].name);
        printf("\t Roll number: %d\n",s[i].roll);
        printf("\t Marks: %.1f\n\n",s[i].marks);
    }

    return 0;
}