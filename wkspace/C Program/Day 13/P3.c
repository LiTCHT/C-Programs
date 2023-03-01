#include<stdio.h>

void printarray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(arr+i));
    }
    printf("\n");
}
int main()
{
    int arr[5]={1,2,3,4,5};

    printarray(arr,5);
    return 0;
}