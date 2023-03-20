//Dymnamic Memory Allocation Using realloc()
#include<stdio.h>
#include<stdlib.h>//Necessary for using realloc()
int main(){
    int *ptr,n,i,size;
    // printf("Enter no of elemets: ");
    // scanf("%d",&n);
    
    size=2;
    ptr=(int *)malloc(size*sizeof(int));//Takes two arguments
    *(ptr+0)=1;
    *(ptr+1)=2;
    for(i=0;i<size;i++){
        printf("%d\n",ptr[i]);
    }
    printf("\n");

    size=5;
    
    
    ptr=realloc(ptr,size*sizeof(int));
    *(ptr+2)=3;
    *(ptr+3)=4;
    *(ptr+4)=5;
    for(i=0;i<size;i++){
        printf("%d\n",ptr[i]);
    }
    
}