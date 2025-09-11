

/* 2. Write a program to check whether a given number is divisible by 5 or not */

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);

    if( x % 5 )     // x % 5 = 0 = False
    {
        printf("This num is not divisible by 5");
    }
    else
    {
        printf("This num is divisible by 5");
    }
    return 0;
}