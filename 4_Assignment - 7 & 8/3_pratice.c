

/* Print this - 

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

int main() 
{
    int i, j, no_of_lines_not_columns;

    printf("Enter Number of LINES not COLUMNS: ");
    scanf(" %d", &no_of_lines_not_columns);


    for (i = 1; i <= no_of_lines_not_columns; i++) // outer loop for rows
    {             
        for (j = 1; j <= no_of_lines_not_columns+1-i; j++) // inner loop for columns
        {     
            printf("* ");        // print star with a space included
        }
        printf("\n");            // move to next line
    }
    return 0;
}


/* 

            i = Lines    = row number
            j = columns  = column number


i=1 → j = 1 2 3 4 5                     * * * * *
i=2 → j = 1 2 3 4                       * * * *
i=3 → j = 1 2 3                         * * * 
i=4 → j = 1 2                           * * 
i=5 → j = 1                             *



*/