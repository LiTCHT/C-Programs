#include<stdio.h>
int main(){
    enum cars{m800=15, zen=23, alto=19, audi=9, bmw=8};
    enum cars c1,c2;
    int cho;
    printf("\nMileage of Cars\n");
    printf("0.Maruti 800\n");
    printf("1.Zen\n");
    printf("2.Alto\n");
    printf("3.Audi A5\n");
    printf("4.BMW X1\n");
    printf("\nEnter Your Choice: \n");
    scanf("%d",&cho);
    switch (cho)
    {
    case 0:
    printf("Maruti 800:%d kmpl",m800);
        break;
    case 1:
    printf("Zen:%d kmpl",zen);
        break;
    case 2:
    printf("Alto:%d kmpl",alto);
        break;
    case 3:
    printf("Audi A5:%d kmpl",audi);
        break;
    case 4:
    printf("BMW X1:%d kmpl",bmw);
        break;
    
    default:
        break;
    }
}