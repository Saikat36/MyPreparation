

/* Write a program to check whether a given alphabet is in uppercase or lowercase. */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter\n");

    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter\n");

    else
        printf("Not an alphabet\n");

        return 0;
}