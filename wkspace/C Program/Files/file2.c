#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char name[30], ch;
    printf("\n Enter new file:");
    scanf("%[^\n]", name);
    fp = fopen(name, "w+");
    if (fp == NULL)
    {
        printf("\n Failed to create a field");
        exit(1);
    }
    printf("\n File created successfully:\n");
    while ((ch=getchar())!= EOF)
    {
        putc(ch, fp);
    }
    fseek(fp, 10, SEEK_SET);
    printf("\n\n data in file:\n");
    while ((ch=getc(fp))!= EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}