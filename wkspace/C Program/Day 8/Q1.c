#include<stdio.h>
int main()
{
    char ch;
    printf("Enter to check if it's vowel or consonant:");
    scanf("%c",&ch);
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
    {
        printf("%c is a vowel");
    }
    else
    {
        printf("It's a consonant");
    }

}