#include "student.h"
#include <stdio.h>
#include <string.h>

// Function to add the students record
// Returns the number of students added
int add(Student s[50])
{
    printf("Enter the total number of working days \n");
    int workDays;
    scanf("%d", &workDays);

    printf("Enter the number of students \n");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("Student number %d \n",
               (i + 1));

        printf("Enter the name of the student \n");
        scanf("%s", s[i].name);

        printf("Enter the roll number \n");
        scanf(" %d", &s[i].rno);

        printf("Enter the fees of the student 'P' for paid ,'N' for not paid \n");
        scanf(" %c", &s[i].fees);

        printf("Enter the number of days the student was present \n");
        scanf("%f", &s[i].days);

        s[i].attend = (s[i].days / (float)workDays) * 100;
        printf("student attendance = %f \n",
               s[i].attend);
    }

    return n;
}

// Function to print the students record
void printStudents(Student s[50], int n)
{
    // Loop to iterate over the students
    // students records
    for (int i = 0; i < n; i++)
    {

        printf("Name of student %s \n",
               s[i].name);
        printf("Student roll number = %d \n",
               s[i].rno);
        printf("Student fees status = %c \n",
               s[i].fees);
        printf("Student number of days present = %f \n",
               s[i].days);
        printf("Student attendance = %f \n",
               s[i].attend);
    }
}

// Function to Student Record
void deleteRecord(Student s[50], int n)
{
    int a = 0;
    printf("Enter the roll number of the student to delete it ");
    scanf("%d", &a);

    // Loop to iterate over the students
    // records to delete the Data
    for (int i = 0; i <= n; i++)
    {
        // Condition to check the current
        // student roll number is same as
        // the user input roll number
        if (s[i].rno == (a))
        {

            // Update record at ith index
            // with (i + 1)th index
            for (int j = i; j < n; j++)
            {
                strcpy(s[j].name, s[j + 1].name);
                s[j].rno = s[j + 1].rno;
                s[j].fees = s[j + 1].fees;
                s[j].days = s[j + 1].days;
                s[j].attend = s[j + 1].attend;
            }
        }
    }

    printf("Student Record deleted");
}

// Function to print the student
// details of the eligible students
void eligibleStudents(Student s[50], int n, float minAttendance, char money)
{
    printf("________________"
           "________________"
           "_______________"
           "_____________ \n");
    printf("Qualified student are = \n");

    // Iterate over the list
    // of the students records
    for (int i = 0; i < n; i++)
    {
        // Check for the eligibility
        // of the student
        if (s[i].fees == money || 'B' == money)
        {
            if (s[i].attend >= minAttendance)
            {
                printf("Student name = %s \n",
                       s[i].name);
                printf("Student roll no. = %d \n",
                       s[i].rno);
                printf(" Student fees = %c \n",
                       s[i].fees);
                printf(" Student attendance = %f \n",
                       s[i].attend);
            }
        }
    }
}
