#include<stdio.h>
#include<math.h>
int main()
{
	int x1=25,x2=35,y1=15,y2=10;
	float dist;
	dist=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("The distance between the two points is:%f\n",dist);
	return 0;
}

