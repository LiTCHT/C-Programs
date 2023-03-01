#include <stdio.h>
int main()
{
     int a[5],i;
     printf("Enter 5 Numbers:\n");
     for(i=0;i<5;i++)
          scanf("%d",&a[i]);
     printf("Odd Numbers in Array are:\n");
     for(i=0;i<5;i++)
          if(a[i]%2!=0)
               printf("%d ",a[i]);
     return 0;
}