#include<stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point points[5];
	int i;

	for(i=0;i<5;i++)
	{
		points[i].x=i;
		points[i].y=i*2;
	}
	for(i=0;i<5;i++)
	{
		printf("Point %d: (%d,%d)\n",i,points[i].x,points[i],y);
	}
	return 0;
}

