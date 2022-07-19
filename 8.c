#include<stdio.h>
#include<conio.h>3 3

int main()
{
    int p,q,r,s,t,k;
    printf("Enter 1st number ");
    scanf("%d",&p);
    printf("\nEnter 2nd number ");
    scanf("%d",&q);
    printf("\nEnter 3rd number ");
    scanf("%d",&r);
    printf("\nEnter 4th number ");
    scanf("%d",&s);
    printf("\nEnter 5th number ");
    scanf("%d",&t);
    k=p+q+r+s+t;
    if(k>33)
    {
        printf("\n\nThe student is passed with %d%%",k);
    }
    else
    {
        printf("\n\nThe student is fail with %d%%",k);
    }


    getch();
}
