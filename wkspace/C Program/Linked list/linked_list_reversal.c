#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node* newnode,*head,*temp;
    int con=1;
    head==NULL;
    while(con==1){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            newnode->next=temp;
            temp=newnode;
        }
        printf("Enter 1 to continue or 0 to exit:");
        scanf("%d",&con);
    }
    head=temp;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}