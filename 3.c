#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    if(n%2==0)
        {
        printf("This number is even");
    }
    else
    printf("This number is odd");
    getch();
}
