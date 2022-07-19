#include<stdio.h>
#include<conio.h>3 3

int main()
{
    int a,b;
    printf("Enter 1st number ");
    scanf("%d",&a);
    printf("\nEnter 2nd number ");
    scanf("%d",&b);
    if(a==b){
        printf("%d is the number same",a);
    }
    else if(a>b)
        printf("Greater number is %d",a);
    else
        printf("Greater number is %d",b);

    getch();
}
