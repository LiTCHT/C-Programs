//structure padding to save memory
#include<stdio.h>
//#pragma pack(1)    //pragma works for VS Code instead of __attribute__((packed))tmp for memory aligning and saving memory and its known as packing
struct xyz{
    int a;
    double d;
    //unsigned char zeros[3];    //unsigned char zeros[3] or unsigned char reserved[3] can be written instead of char c to avoid using #pragma pack(1)
    
}tmp;        /*__attribute__((packed))tmp={10,'A',20.14};*/      //This works for Linux only
int main(){
    printf("size:%d\n",sizeof(tmp));
    //printf("%p\t%p\t%p\t",&tmp.a,&tmp.d,&tmp.c);
    //printf("%d\t%c\t%lf\t",tmp.a,tmp.c,tmp.d);
}