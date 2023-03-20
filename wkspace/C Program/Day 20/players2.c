#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct out_game
{
    int og_id;
    char og_name[50];
};
struct in_game
{
    int ig_id;
    char ig_name[50];
};
typedef struct
{
    int id;
    char name[50];
    int Age;
    union
    {
        struct out_game og;
        struct in_game ig;
    } gaming;
} player;
int main()
{
    int h, i;
    int ch;
    printf("Enter the number of Players");
    scanf("%d", &h);
    player c[100];
    printf("Enter %d players Details \n \n", h);
    for (int i = 0; i < h; i++)
    {
        printf("Player %d:- \n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Id: ");
        scanf("%d", &c[i].id);

        printf("Age: ");
        scanf("%d", &c[i].Age);

        printf("(INDOOR Game:1)/(OUTDOOR Game:2)");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("Game Id: ");
            scanf("%d", &c[i].gaming.ig.ig_id);
            printf("Game Name: ");
            scanf("%s",&c[i].gaming.ig.ig_name);
        }
        else if (ch == 2)
        {
            printf("Game Id: ");
            scanf("%d", &c[i].gaming.og.og_id);
            printf("Game Name: ");
            scanf("%s",&c[i].gaming.og.og_name);
        }
    }

    for (int i = 0; i < h; i++)
    {
        printf("Players %d:- \n", i + 1);

        printf("Name \t: ");
        printf("%s \n", c[i].name);

        printf("Id \t: ");
        printf("%d \n", c[i].id);

        printf("Age \t: ");
        printf("%d \n", c[i].Age);

        printf("(INDOOR Game:1)/(OUTDOOR Game:2)");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("Game Id:\t ");
            printf("%d\n", c[i].gaming.ig.ig_id);
            printf("Game Name:\t");
            printf("%s\n", c[i].gaming.ig.ig_name);
        }
        else if (ch == 2)
        {
            printf("Game Id:\t");
            printf("%d\n", c[i].gaming.og.og_id);
            printf("Game Name:\t");
            printf("%s\n", c[i].gaming.og.og_name);
        }

        printf("\n");
    }
}