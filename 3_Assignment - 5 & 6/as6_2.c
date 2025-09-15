

/* Give me the most optimize solution of this question - */


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
