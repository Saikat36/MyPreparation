

/* Write a program which asks the user to enter an even number. The computer will give the user at most 3 chances. If the user fails to enter an even number in any of the chances, a "Game Over" message should be displayed on the screen. Otherwise, a "You Win" message should be displayed and the game stops immediately. */


#include<stdio.h>

int main()
{
    int num;

    for (int i = 1; i <= 3; i++)
    {
        printf("Chance %d: Enter an even number: ", i);
        scanf(" %d",&num);
        
    }
    
}