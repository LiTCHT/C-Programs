//delete an element from an array
#include<stdio.h>
int main()
{
    int n,a[50],i,j,ele;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element before deleting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter element to delete:");
    scanf("%d",&ele);
    for(i=0;i<n-1;i++)
    {
        if(ele==a[i])
        {
            a[i]=a[i+1];
            j=1;
        }
        if(i>j)
        {
            a[i]=a[i+1];
            j++;
        }
    }
    printf("\nEnter after deleting:");
    for(i=0;i<n-1;i++)
    {
    printf("%d\t",a[i]);
    }
}