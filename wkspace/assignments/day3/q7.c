#include<stdio.h>
int main()
{
	int s,sec,hr,min;
	printf("Enter time in seconds:");
	scanf("%d",&sec);
	hr=sec/3600;
	min=(sec-(hr*3600))/60;
	s=(sec-(3600*hr)-(min*60));
	printf("Time:%d Hours %d Minutes %d Seconds\n",hr,min,s);
}
