#include<stdio.h>
int main()
{
    float dis;
    printf("Enter the distance between two cities in KM:");
    scanf("%f",&dis);

    printf("\n%f is the distance between the cities in meters",dis*1000);
    printf("\n%f is the distance between the cities in feet",dis*3280.8399);
    printf("\n%f is the distance between the cities in inches",dis*39370.0788);
    printf("\n%f is the distance between the cities in centimeters",dis*100000);
    return 0;
}