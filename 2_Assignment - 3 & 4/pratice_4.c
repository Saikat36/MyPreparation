

/*          some question & ans about pointers         */


#include <stdio.h>

int main()
{
    char *p = "ABC";

    printf("%%c of *p : %c\n", *p);          // A
    printf("%%c of *(p+1): %c\n", *(p+1));   // B
    printf("%%s of p+1 : %s\n", p+1);        // BC
    
//  p -> p hold address of A (&A)   
//  p+1 -> p+1 is a pointer to 'B', %s expects pointer → prints "BC"


    return 0;
}



/*

| Expression | Meaning                                               | Output |
| ---------- | ----------------------------------------------------- | ------ |
|  *p        | value at address of  "A"  →  'A'                      |  A     |
|  *(p+1)    | next character →  'B'                                 |  B     |
|  p+1       | address of  'B'  →  %s  prints from  'B'  till  '\0'  |  BC    |


*/