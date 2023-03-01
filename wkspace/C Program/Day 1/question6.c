#include<stdio.h>

struct Point
{
	int x;
	int y;
};
int main()
{
	struct Point p1;
	struct Point*ptr;
	ptr=&p1;

	ptr->x=10;
	ptr->y=20;

	printf("Point p1;(%d,%d)\n",p1.x,p1.y);

	return 0;
}
