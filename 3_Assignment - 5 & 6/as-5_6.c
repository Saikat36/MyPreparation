

/* 6. Write a program to check whether a given number is a three digit number or not. */



#include <stdio.h>

int main()
{
    int x;
    printf("Enter a no : ");
    scanf("%d", &x);

    if(x>=100 && x<=999)
    {
        printf("3 Digit no");
    }
    else{
        printf("Not a 3 digit number");
    }
    
    return 0;
}