#include<stdio.h>
#include<string.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	struct student s1;
	strcpy(s1.name,"John Doe");
	s1.roll=1;
	s1.marks=90.5;

	printf("Student name:%s\n",s1.name);
	printf("Roll number:%d\n",s1.roll);
	printf("Marks:%2f\n",s1.marks);

	return 0;
}
