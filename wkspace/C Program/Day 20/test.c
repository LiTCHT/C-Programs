#include<stdio.h>
int main(){
    char name[20];
    printf("Enter a string:");
    scanf("%[^\n]%*c",name);
    printf("The string is:%s",name);
    }