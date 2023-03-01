// C program for the Examination
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student students[50];
int n;
float minAttendance = 75.00f;
char money = 'P';

// Function to execute the software
// for the student examination
// registration system
void execute()
{

    printf(" Enter the serial number to select the option \n");
    printf(" 1. To show Eligible candidates \n");
    printf(" 2. To delete the student record \n");
    printf(" 3. To change the eligibility criteria \n");
    printf(" 4. Reset the eligibility criteria \n");
    printf(" 5. Print the list of all the student \n");
    printf(" Enter 0 to exit \n");

    int option = 0;
    scanf("%d", &option);

    // Switch Statement for choosing the desired option for the user
    switch (option)
    {
    case 1:
        eligibleStudents(students, n, minAttendance, money);
        execute();
        break;

    case 2:
        deleteRecord(students, n);
        n -= 1;
        execute();
        break;

    case 3:
        printf("Old Attendance required = %f", minAttendance);
        printf("\n Enter the updated attendance required \n");
        scanf("%f", &minAttendance);
        printf("fees status required was %c \n", money);
        printf("Enter the new fees status 'P' for paid 'N' for not paid and 'B' for both \n");
        scanf("%c", &money);
        printf("Eligibility Criteria updated \n");
        execute();
        break;

    case 4:
        minAttendance = 75.00f;
        money = 'P';
        printf("Eligibility creitria reset \n");
        execute();
        break;

    case 5:
        printStudents(students, n);
        execute();
        break;

    case 0:
        exit(0);

    default:
        printf("Enter number only from 0-4 \n");
        execute();
        break;
    }
}
// Driver Code
int main()
{

    n = add(students);
    execute();
    return 0;
}