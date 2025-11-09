

/* Write a program to swap values of two int variables without using third variable and arithmetic operators , XOR Operator */


#include <stdio.h>

int main()
{
    int x = 10, y = 20;

    x = (x << 16) | y; // store x in higher 16 bits + y in lower 16 bits

    y = x >> 16;

    x = x & 0xFFFF;

    printf("x = %d & y = %d\n", x, y);

    return 0;
}


/*
 
            Step - 0

x = 10  → 0000 0000 0000 1010
y = 20  → 0000 0000 0001 0100



            Step 1


x = (x << 16) | y;

x << 16 = 0000 1010 0000 0000 0000 0000


    0000 1010 0000 0000 0000 0000
 |  0000 0000 0000 0000 0001 0100
    --------------------------------
    0000 1010 0000 0000 0001 0100   
    ⤴️
 So now x contains both numbers together ⤵️
Upper 16 bits (old x (10)) + Lower 16 bits (old y (20))



🔑 Why do we shift by 16?

ans : we chose 16 on purpose — because an int is usually 32 bits wide, and we want to split it into two halves:

Upper 16 bits → hold the old x
              +
Lower 16 bits → hold the old y



            Step 2


y = x >> 16;

    0000 1010 0000 0000 0001 0100  >> 16
  = 0000 0000 0000 0000 0000 1010 [it is old x (10)]
  = So y = 10 (old x). ✅



            Step 3:


x = x & 0xFFFF;


    0000 1010 0000 0000 0001 0100
  & 0000 0000 1111 1111 1111 1111
   --------------------------------
    0000 0000 0000 0000 0001 0100 = So x = 20 (old y). ✅



What is 0xFFFF?

The prefix 0x means the number is written in hexadecimal (base-16).

F in hex = 15 in decimal = 1111 in binary.


0xF     = 1111  (4 bits = 15 in decimal)
0xFF    = 1111 1111  (8 bits = 255 in decimal)
0xFFFF  = 1111 1111 1111 1111  (16 bits = 65535 in decimal)



    0000 1010 0000 0000 0001 0100
 &  0000 0000 1111 1111 1111 1111
   --------------------------------
    0000 0000 0000 0000 0001 0100   → 20


*/