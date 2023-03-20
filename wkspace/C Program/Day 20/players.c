#include<stdio.h>
typedef struct {
    int roll;
    char name[30],type_game;
    
    union{
    struct out_games ogame;
    struct in_games igame;
    }game;

}student;

struct out_games{
    int code;
    char name[30],ground[20];
}og;

struct in_games{
    int code;
    char name[30];
}ig;
struct player p1;

int main(){
    int i;
    student s[2];
    printf("Enter student details:\n");
    for(i=0;i<2;i++){
        printf("\n Enter roll no:");
        scanf("%d",&s[i].roll);
        printf("Enter student name:");
        scanf("%[^\n]",s[i].name);
        printf("You like to register for indoor(I) or outdoor(O) games?");
        scanf("%c",&s[i].type_game);
        if(toupper(s[i].type_game)=='I'){
            printf("Enter Game Code:");
            scanf("%d",&s[i].game.igame.code);
            printf("Enter Game Name:");
            scanf("%[^\n]",&s[i].game.igame.name);
        }
        else{
            printf("\nEnter game code: ");
            scanf("%d",&s[i].game.ogame.code);
            printf("Enter game name: ");
            scanf("%[^\n]",&s[i].game.ogame.name);
            printf("\n Enter ground name: ");
            scanf("%s[^\n]",&s[i].game.ogame.ground);
        }
    }
    printf("\nStudent Details\n");
    printf("\nRoll\tStudent_Name\t\tGame_Type\tGame_Code\tGame_name\tGround\n");
    printf("------------------------\n");
    for(i=0;i<2;i++){
        printf("\n%4d\t%-15s\t5%c");
    }



    // player p1 = {100,"ronaldo",39} , p2 = {101,"messi",35};

    // printf("Player 1 id:%d name:%s age:%d\n",p1.id,p1.name,p1.age);
    // printf("Player 2 id:%d name:%s age:%d\n",p2.id,p2.name,p2.age);
    // scanf("%[^\n]",p1.name);
}