

/* Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. */


#include <stdio.h>

int main()
{
    float cp, sp, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percent);
    }
    else if (sp < cp)
    {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percent);
    }
    else
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
