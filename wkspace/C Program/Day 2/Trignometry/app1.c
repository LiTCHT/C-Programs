#include<stdio.h>
#include"trangula.h"
int main()
{
	int b,p,h;
	printf("Enter the base, perpendicular, hypotenuse");
	scanf("%d %d %d\n",&b,&p,&h);

	printf("sine is: %d\n",sine(p,h));
	printf("cose is: %d\n",cose(b,h));
	printf("tane is: %d\n",tane(p,b));
}
