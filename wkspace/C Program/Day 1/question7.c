#include<stdio.h>

struct Point
{
	int x;
	int y;
};
struct Point addPoints(struct Point p1, struct Point p2)
{
	struct Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	return p3;
}

int main()
{
	struct Point p1, p2, p3;
	p1.x = 10;
	p1.y = 20;
	p2.x = 30;
	p2.y = 40;

	p3 = addPoints(p1, p2);

	printf("Point p3: (%d, %d)\n",p3.x, p3.y);

	return 0;
}
