#include<stdio.h>
int main()
{
	double wi1,ci1,wi2,ci2, result;
	printf("Weight - Item:");
	scanf("%lf",&wi1);
	printf("NO of items1:");
	scanf("%lf",&ci1);
	printf("weight - Item2:");
	scanf("%lf",&wi2);
	printf("No of items2:");
	scanf("%lf",&ci2);
	result = ((wi1 * ci1)+(wi2 * ci2)) / (ci1 + ci2);
	printf("Average value = %f\n", result);
	return 0;
}

