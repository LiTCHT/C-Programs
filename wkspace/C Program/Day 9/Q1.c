//count the number of times function call is called

#include<stdio.h>
int count();
int main()
{
    count();
    count();
    count();
    count();
}
int count()
{
    int c=0;
    

    printf("%d\t%d\n",++c,&c);
}