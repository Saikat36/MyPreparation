

/* 9. Write a program to check whether a given year is a leap year or not. */

/* 

Explanation of Leap Year Rule

1. If the year is divisible by 400 → Leap Year.

2. Else if divisible by 4 but not by 100 → Leap Year.

3. Otherwise → Not a Leap Year.

*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // A leap year is divisible by 400 OR (divisible by 4 AND not divisible by 100)
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}


/* 

2000 is a Leap Year.
1900 is Not a Leap Year.
2024 is a Leap Year.

*/