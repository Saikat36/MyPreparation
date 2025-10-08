

/*      When to use - %s,  %p , %c , %d       */


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


/* 

| Type                          | Print with | Example               |
| ----------------------------- | ---------- | --------------------- |
| int                           | `%d`       | `printf("%d", x);`    |
| char                          | `%c`       | `printf("%c", ch);`   |
| char[] / char *               | `%s`       | `printf("%s", str);`  |
| any pointer                   | `%p`       | `printf("%p", ptr);`  |
| dereferenced pointer (to int) | `%d`       | `printf("%d", *ptr);` |



Each format specifier is a different way to open and interpret the box:

    %d → open it expecting a number

    %c → open it expecting one letter

    %s → open it expecting a whole word

    %p → open it expecting an address tag



| Type / Example     | Spec | Works With              | Prints (Expected)      
| ------------------ | ---- | ----------------------- | ---------------------- 
| int x = 65;        | %d   | int, short, long        | 65                     
| char ch = 'A';     | %c   | char                    | A                      
| char *str = "Hello"| %s   | char *, char[]          | Hello                  
| int *ptr = &x;     | %p   | any pointer             | address (e.g. 0x5000)  
| *ptr (value at ptr)| %d   | dereferenced int ptr    | 65                     


-----

👉 NOTE : Both pointers (char * and int *) take the same size — NOT based on what they point to.

| Type       | What it points to  | Size of the pointer itself
| ---------- | ------------------ | --------------------------
| `char *`   | 1 byte (`char`)    | 8 bytes (on 64-bit)       
| `int *`    | 4 bytes (`int`)    | 8 bytes (on 64-bit)       
| `float *`  | 4 bytes (`float`)  | 8 bytes (on 64-bit)       
| `double *` | 8 bytes (`double`) | 8 bytes (on 64-bit)       

*/