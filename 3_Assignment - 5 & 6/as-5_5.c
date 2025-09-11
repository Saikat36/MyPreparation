

/* 5. Write a program to check whether the given number is even or odd using a bitwise operator. */


#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (( x ^ 1 ) == (x + 1 ))
    {
      printf("Even Number\n");
    }
    else{
      printf("Odd Number\n");
    }
}


/*  ( x ^ 1 ) == (x + 1 ) Explanation 

  Test for Even - 

    0110  -> 6
  ^ 0001  -> 1
  --------
    0111  -> 7
    


  Test for Odd - 

    0101  -> 5
  ^ 0001  -> 1
  --------
    0100  -> 4

    
*/