
/* Write a program to add numbers entered by user, User can enter any number of numbers until he enters 0  */


#include<stdio.h>

int main()
{
    int x,sum;

    printf("Enter an number (Last number should be 0) : ");

    while(1)        // infinte loop 
    {
        scanf(" %d",&x);

        if(x==0)
        {
            break;
        }
        sum = sum+x;
    }
    printf("Sum is %d ",sum);
    return 0;
}