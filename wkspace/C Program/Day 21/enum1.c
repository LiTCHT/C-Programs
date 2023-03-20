#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,cho;
    enum{add,sub,mul,div,power};
    printf("\nMenu\n");
    printf("0.Add\n");
    printf("1.Sub\n");
    printf("2.Multiply\n");
    printf("3.Divide\n");
    printf("4.power\n");
    printf("\nEnter Your Choice: \n");
    scanf("%d",&cho);
    printf("\nEnter two numbers: \n");
    scanf("%d%d",&a,&b);
    switch (cho)
    {
    case add:  //here case 0 can also be given instead of case add
        printf("\nSum is %d\n",a+b);
        break;
    case sub:
        printf("\nDifference is %d\n",a-b);
        break;
    case mul:
        printf("\nProduct is %d\n",a*b);
        break;
    case div:
        printf("\nDivision is %d\n",a/b);
        break;
    case power:
    c=pow(a,b);
        printf("\nPower is %d\n",c);
        break;
    
    default:
        break;
    }
}