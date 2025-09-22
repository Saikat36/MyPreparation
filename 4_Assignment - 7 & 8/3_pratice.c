

/* 

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {             // outer loop for rows
        for (j = 1; j <= 6 - i; j++) {     // inner loop for columns
            printf("* ");                  // print star
        }
        printf("\n");                      // move to next line
    }
    return 0;
}
