


#include <stdio.h>

int main()
{
    int x = 65;
    char ch = 'A';
    char *str = "Hello";
    int *ptr = &x;

    printf("x = %d\n", x);        // prints number 65
    printf("ch = %c\n", ch);      // prints character A
    printf("str = %s\n", str);    // prints Hello
    printf("ptr = %p\n", ptr);    // prints address of x (like 0x7ffee8f3a9bc)
    printf("*ptr = %d\n", *ptr);  // prints 65 (value pointed to)

    return 0;
}

