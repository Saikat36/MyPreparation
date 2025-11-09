

/* 8. Write a program to swap values of two int variables without using third variable and without using +, - operators. */


#include <stdio.h>

int main()

{
    int x = 10, y = 20;

    x = x * y; //      x=200, y=20
    y = x / y; //      y=200/20 = 10
    x = x / y; //      x=200/10 = 20
    
    printf("x = %d & y = %d", x, y);

    return 0;
}
