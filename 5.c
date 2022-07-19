#include<stdio.h>
#include<conio.h>3 3

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    if(n<1000)
        {
        printf("%d is 3 digit number",n);
    }
    else
    printf("%d is not 3 digit number ",n);

    getch();
}
