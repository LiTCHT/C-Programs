#include<stdio.h>
#include<string.h>
struct Date
{
	int day;
	int month;
	int year;
};
struct Student
{
	char name[50];
	int roll;
	float marks;
	struct Date dob;
};
int main()
{
	struct Student s1;
	strcpy(s1.name,"John Doe");
	s1.roll=1;
	s1.marks=90.5;
	s1.dob.day=1;
	s1.dob.month=1;
	s1.dob.year=2000;
	printf("student name: %s\n",s1.name);
	printf("roll number: %d\n",s1.roll);
	printf("marks: %.2f\n",s1.marks);
	printf("date of birth: %d/%d/%d\n",s1.dob.day,s1.dob.month,s1.dob.year);
	return 0;
}
