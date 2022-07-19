#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    if(n%5==0)
        {
        printf("This number is divided");
    }
    else
    printf("This number is non-divided ");
    getch();
}
