
/* 10. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. */

/*  For Ignoring this "if-else" Process I use the most optimize solution - */


#include<stdio.h>

int main()
{
    int a,b,c, max;
    printf("Enter 3 number: ");
    scanf(" %d %d %d",&a,&b,&c);

    max = a;

    if ( b > max )
        max = b;
    
    if ( c > max )
        max = c;
        
    printf("Greatest number is: %d\n", max);

    return 0;
}


/* I cam do this but the upper solution is much optimize 

    if(a>b)
    {
        if(a>c)
            printf("%d is biggest",a);
        else
            printf("%d is biggest",c);
    }
    else 
    {
        if(b>c)
            printf("%d is biggest",b);
        else
            printf("%d is biggest",c);
    }
*/