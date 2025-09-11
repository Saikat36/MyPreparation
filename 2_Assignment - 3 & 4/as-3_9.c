

/* 9. Write a program to swap values of two int variables without using third variable and arithmetic operators. */



/*   XOR  Operator Rules    

        0 ^ 0 = 0           // IMPORTANT

        1 ^ 0 = 1

        0 ^ 1 = 1

        1 ^ 1 = 0           // IMPORTANT 

*/

#include <stdio.h>

int main()

{
    int x = 10, y = 20;

    x = x ^ y; //      x=30, y=20
    y = x ^ y; //      x=30, y=10
    x = x ^ y; //      x=20, y=10;

    printf("x = %d & y = %d", x, y);

    return 0;
}

/*

//                      Step  1

    x = x ^ y;   // x = 10 ^ 20 = 30


    explain  =

       01010   (10)
    ^  10100   (20)
      --------
       11110   (30)

//                        Step - 2

    y = x ^ y;   // y = 30 ^ 20 = 10


    explain  =

       11110   (30)
    ^  10100   (20)
      --------
       01010   (10)   // ← old x



//                        Step - 3

    x = x ^ y;   // x = 30 ^ 10 = 20

      11110   (30)
  ^   01010   (10)
    --------
      10100   (20)   // ← old y


 */