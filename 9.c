#include<stdio.h>
#include<conio.h>3 3

int main()
{
    char w;
    printf("Enter a character ");
    scanf("%c",&w);
    if(w>='A' && 'Z'>=w)
        printf("This word is Uppercase ");
    else
        printf("This word is Lowercase ");

    getch();
}
