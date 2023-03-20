//Dymnamic Memory Allocation Using calloc()
#include<stdio.h>
#include<stdlib.h>//Necessary for using calloc()
int main(){
    int *p,n,i;
    printf("Enter no of elemets: ");
    scanf("%d",&n);
    
    p=(int *)calloc(n,sizeof(int));//Takes two arguments
    if(p==NULL){
        printf("\nFailed to allocate memory\n");
        exit(1);
    }
    printf("\nMemory allocated at %x\n",p);
    printf("Initial Values:\n");
    for(i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    for(i=0;i<n;i++){
        p[i]=i+1;
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    printf("\n");
}