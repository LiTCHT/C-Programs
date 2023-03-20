#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<2;i++){
        *(ptr+i)=i+1;
    }
    int n;
    n=2;
    ptr=realloc(ptr,5*sizeof(int));
    for(int i=n;i<5;i++){
        *(ptr+i)=i+1;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
}