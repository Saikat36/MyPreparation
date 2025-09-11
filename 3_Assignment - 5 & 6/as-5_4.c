

/* 4. Write a program to check whether a given number is an even number or an odd number without using % operator. */

/*  This wil work also ⤵️
{
    if (x & 1)
        printf("The number is odd\n");
    else
        printf("The number is even\n");
}
*/

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);

    if ((x & 1) == 0)   // check last bit
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n"); 
    }
    return 0;
}

/* 

If i did (x & 1 == 0) 

In C, == has higher precedence than &

But C read this way, (x & (1 == 0))

1 == 0 → false → 0
So → x & 0 → always 0
Condition always false 😅

    0110 
  & 0000
  --------
    0000


👉 & (AND) checks the last bit (0 = even, 1 = odd).
👉 | (OR) always forces the last bit to 1, so it’s useless for even/odd check.

    0110 
  | 0001
  --------
    0111

*/