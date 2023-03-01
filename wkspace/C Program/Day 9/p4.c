#include<stdio.h>
int rect_area(int l, int b)
{
    int area;
    area=l*b;
    return area;
}
int rect_peri(int l, int b)
{
    int p;
    p=2*(l+b);
    return p;
}
int main()
{
    int a,b,x,y;
    printf("Enter the length of rectangle:");
    scanf("%d",&a);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);

    x=rect_area(a,b);
    y=rect_peri(a,b);

    printf("\nThe area of rectangle = %d \n\nperimeter of rectangle = %d",x,y);
    return 0;
}
