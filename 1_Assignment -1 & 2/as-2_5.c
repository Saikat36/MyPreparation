

/* 5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas. */



#include<stdio.h>

int main()
{
    float sp,cp,profit;

    printf("Enter the selling priceand cost price of bananas : ");
    scanf("%f %f",&sp,&cp);

    profit = (sp-cp)*25/12;

    printf("Profit is %f",profit);

    return 0;
}