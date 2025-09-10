

/*
        Operator -  ^       ~       >>      ?:(Turnary oprator) 
 */

#include <stdio.h>
int main()
{
    int x = 60 ^ 29;         //    Operator =  ^
    printf("%d \n", x);

    int y = ~25;            //     Operator = ~
    printf("%d \n", y);

    /*

        a = 25 :        Original: 00011001

        1's complement of 25:

        11100110        // invert (1’s complement) -> 11100110

        Add +1 for 2’s complement :

        11100110
        +      1
        --------
        11100111  ← this is how -25 is stored



    Key point:

        In computers, negative numbers are not stored with a minus sign.

        Instead, they are stored in Two’s Complement form

    */

    
    int z = 53 >> 2;            //    Operator =  >>
    printf("%d \n", z);

    /*
                53 = 00000000 00000000 00000000 00110101
                        ↓ shift right by 2
                z  = 00000000 00000000 00000000 00001101

    */


    int p = !5 > -2;            //     Operator  =  !
    printf("%d \n", p);

    /*
        int p = !True > -2;
              = False > -2
              = 0 > -2
              = True
              = 1
    */



    /* Write a programe to check a number positive or non-positive using Turnary oprator  */


    int h = 0;

    h > 0 ? printf("Possitive") : printf("Non-Possitive");     //  ?:(Turnary oprator) 





    return 0;
}