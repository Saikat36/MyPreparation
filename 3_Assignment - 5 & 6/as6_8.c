

/* 8. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character. */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet : ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter\n");

    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter\n");

    else if (ch >= '0' && ch <= '9')      // Check for a digit
    {
        printf("It's an Digit \n");
    }
    else                                // Check for a special character
        printf("Not an alphabet\n");


    return 0;
}