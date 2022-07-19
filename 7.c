#include<stdio.h>
#include<conio.h>3 3

int main()
{
    float cost_price,sell_price;
    int net;
    printf("Enter cost price ");
    scanf("%f",&cost_price);
    printf("Enter sell price ");
    scanf("%f",&sell_price);
    if(cost_price<sell_price)
    {
        net=(sell_price-cost_price)/cost_price*100;
        printf("\nThe net profit is +%d %%",net);
    }
    else
    {
        net=(cost_price-sell_price)/cost_price*100;
        printf("\nThe net loss is -%d %%",net);

    }


    getch();
}
