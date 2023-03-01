#include<stdio.h>
#include<stdlib.h>
int main(){
        char std;
        FILE *fp;
        fp=fopen("student1.txt","w+");
        if(fp==NULL){
                printf("unable to open");
                exit(1);
        }
        printf("sucessfully opened");
        printf("enter data\n");
        while((std=getchar())!=EOF){
                putc(std,fp);
        }
        fseek(fp,12,SEEK_CUR);
        printf("Data in files\n");
        while((std = getc(fp))!=EOF){
                putchar(std);
        }
        fclose(fp);

}
