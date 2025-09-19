

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


 /* if I enter a digit then ASCII code integer 
 value will be returned for example I enter 6
 then It will give me 54 as an output */

    printf("%d",ch);   // input - 6 , output - 54

    return 0;
}


/* 

Char   ASCII Code   Explanation
----   ----------   ------------------------------
'0'    48           When you type 0, stored as 48
'1'    49           When you type 1, stored as 49
'2'    50           When you type 2, stored as 50
'3'    51           When you type 3, stored as 51
'4'    52           When you type 4, stored as 52
'5'    53           When you type 5, stored as 53
'6'    54           When you type 6, stored as 54
'7'    55           When you type 7, stored as 55
'8'    56           When you type 8, stored as 56
'9'    57           When you type 9, stored as 57


*/