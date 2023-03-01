#include<stdio.h>
#include<string.h>

struct Emplyee
{
	char name[50];
	int age;
	float salary;
};

int main()
{
	struct Emplyee e1;
	strcpy(e1.name, "Jane Doe");
	e1.age = 30;
	e1.salary = 50000.0;

	printf("Employee name: %s\n",e1.name);
	printf("Age: %d\n",e1.age);
	printf("Salary: $%.2f\n",e1.salary);

	return 0;
}

