//Dymnamic Memory Allocation Using malloc()
#include<stdio.h>
#include<stdlib.h>//Necessary for using malloc()
int main(){
    int *p,n,i;
    printf("Enter no of elemets: ");
    scanf("%d",&n);
    //void* malloc(n*sizeof(int));
    
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("\nFailed to allocate memory\n");
        exit(1);
    }
    printf("\nMemory allocated at %x\n",p);
    printf("Initial VAlues:\n");
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
    // getchar();
    // getchar();
    // getchar();
}