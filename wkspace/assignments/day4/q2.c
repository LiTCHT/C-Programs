#include<stdio.h>
int main()
{
	int days,weeks,years;

	days = 1329;

	years = days/365;
	weeks = (days % 365)/7;
	days = days-((years*365)+(weeks*7));

	printf("days: %d\n", days);
	printf("weeks:%d\n", weeks);
	printf("years:%d\n", years);
	return 0;
}


