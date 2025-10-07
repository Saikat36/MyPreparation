

#include <stdio.h>
int main() 
{
    char arr[] = "AB";   // string literal "AB" copied into array
    const char *s = "AB";

    printf("%p\n", arr);     // address of first element
    printf("%c\n", arr[0]);  // 'A'
    printf("%c\n", arr[1]);  // 'B'

    printf("_____________\n\n");

    printf("%c\n",  s );         // 'A'     s[0] == *(&s[0]) == *(s) == A
    printf("%c\n", *(&s[1]));    // 'B'     s[1] == *(&s[1]) == *(s+1) == B
    printf("%c\n", *(s+2));      // '\0'

    return 0;
}

/*-------------------------Array  Indiaxing-------------------------

1. Explnation - char arr[] = "AB"; 


Address   Value   Array Index   Pointer Equivalents
-------   -----   -----------   --------------------------------
1000      'A'     arr[0]        *(arr)      == *(&arr[0]) == arr[0] == 'A'
1001      'B'     arr[1]        *(arr+1)    == *(&arr[1]) == arr[1] == 'B'
1002      '\0'    arr[2]        *(arr+2)    == *(&arr[2]) == arr[2] == '\0'



Memory Visualization of an Array - 


arr ──► [ arr[0] = 'A' ] [ arr[1] = 'B' ] [ arr[2] = '\0' ]
                ^                ^                ^
                |                |                |
            *(arr)          *(arr+1)          *(arr+2)



--------------------------Character Indiaxing----------------------


2. Explnation - const char *s = "AB";



Address   Value   String Literal Index   Pointer Equivalents
-------   -----   -------------------   --------------------------------
5000      'A'     s[0]                  *(s)     == *(&s[0]) == 'A'
5001      'B'     s[1]                  *(s+1)   == *(&s[1]) == 'B'
5002      '\0'    s[2]                  *(s+2)   == *(&s[2]) == '\0'


*/