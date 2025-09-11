

/* 10. Write a program to swap values of two int variables in single line arithmetic expression. */

#include <stdio.h>

int main()
{
    int x = 10, y = 20;

    // single-line swap using arithmetic

    x = x + y - (y = x);

    printf("x = %d & y = %d\n", x, y);

    return 0;
}


/* 

Step 1 : Evaluate (y = x)


When we hit (y = x):

y gets assigned the value of x.

So now y = 10.

So (y = x) happens before the subtraction.

BUT (y = x) also returns that value (10) as part of the expression.


x = x + y - (10)
x = 10 + 20 - 10
x = 20



*/