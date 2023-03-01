#include<stdio.h>
#include"report.h"
int main()
{  
        int p,c,m,e;
        printf("Marks for Physics is:\n");
        scanf("%d",&p);
        printf("Marks for Chemistry is:\n");
        scanf("%d",&c);
        printf("Marks for Maths is:\n");
        scanf("%d",&m);
        printf("Marks for English is:\n");
        scanf("%d",&e);
        printf(" grade in PHYSICS\n", phy(p));
        printf(" grade in CHEMISTRY\n", chem(c));
        printf(" grade in MATH\n", math(m));
        printf(" grade in ENGLISH\n", eng(e));
        printf("\n");
        printf("GRADE SYSTEM\n");
        printf("\n");
        printf("grade\tmark\nO\t91-100\nA\t81-90\nB\t71-80\nC\t61-70\nD\t51-60\nE\t34-50\nFAIL\t0-33");
       return 0;
}