#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char name[30];
    printf("\n Enter new file:");
    scanf("%[^\n]",name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("\n Failed to create a field");
        exit(1);
    }
    printf("\n File created successfully");
}