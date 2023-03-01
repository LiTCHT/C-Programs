//print characters from A-Z
#include<stdio.h>
int main()
{
    printf("alphabets from A - Z are:\n");
    for(int ch=0;ch<=25;ch++)
    {
        printf("%c",97+ch);
    }
    return 0;
}