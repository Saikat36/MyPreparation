

/*      When to use - %s,  %p , %c , %d       */

#include <stdio.h>

int main()
{
    int x = 65;
    char ch = 'A';
    int *ptr = &x;    
    char *str = "Hello"; // str is a pointer that holds the address of the string literal "Hello".

    /*  "Hello"               | ✅ **String literal**
          ↓
       Fixed word stored in **read-only memory** (cannot be changed). */



    printf("x = %d\n", x);       // prints number 65
    printf("ch = %c\n", ch);     // prints character A
    printf("str = %s\n", str);   // prints Hello
//❌printf("%s\n", *str);  // “1st value at address str” = 'H(72) = printf("%s\n", 72)❌
    printf("ptr = %p\n", ptr);   // prints address of x (like 0x7ffee8f3a9bc)
    printf("*ptr = %d\n", *ptr); // prints 65 (value pointed to)

    return 0;
}

/*

----------------------------------------------------------------------------------
| Part                   | What it really is
| ---------------------- | -----------------------------------------------------
|  "Hello"               | ✅ **String literal**
|    ↓
|  Fixed word stored in **read-only memory** (cannot be changed).
---------------------------------------------------------------------------------



---------------------------------------------------------------------------------
| Part                   | What it really is
| ---------------------- | -----------------------------------------------------
|  char *str = "Hello";  | 🚫 Not a string literal — it’s a **pointer variable**
|     ↓
|str  is a **pointer** that holds the **address** of the string literal  "Hello" .
----------------------------------------------------------------------------------






| Type                          |Print with| Example             |
| ----------------------------- |----------| --------------------|
| int                           | %d       | printf("%d", x);    |
| char                          | %c       | printf("%c", ch);   |
| char[] / char *               | %s       | printf("%s", str);  |
| any pointer                   | %p       | printf("%p", ptr);  |
| dereferenced pointer (to int) | %d       | printf("%d", *ptr); |



Each format specifier is a different way to open and interpret the box:

    %d → open it expecting a number

    %c → open it expecting one letter

    %s → expecting an address tag and it's print a whole word untill '\0'

    %p → open it expecting an address tag


-----

| Example / Type        | Spec | Works With        | Meaning / Holds      | Prints |
|-----------------------|------|-------------------|----------------------|--------|
| int x = 65;           | %d   | int, short, long  | number               | 65     |
| char ch = 'A';        | %c   | char              | single character     | A      |
| "Hello" (literal)     | %s   | char *, char[]    | read-only string     | Hello  |
| char *str = "Hello";  | %s   | char *, char[]    | address of "Hello"   | Hello  |
| char arr[] = "Hello"; | %s   | char[]            | string copy in stack | Hello  |
| int *ptr = &x;        | %p   | any pointer       | address of x         | 0x5000 |
| *ptr (value at ptr)   | %d   | int pointer value | value from pointer   | 65     |


-----

👉 NOTE : Both pointers (char * and int *) take the same size — NOT based on what they point to.

| Type       | What it points to  | Size of the pointer itself
| ---------- | ------------------ | --------------------------
| char *     | 1 byte (char)      | 8 bytes (on 64-bit)
| int *      | 4 bytes (int)      | 8 bytes (on 64-bit)
| float *    | 4 bytes (float)    | 8 bytes (on 64-bit)
| double *   | 8 bytes (double)   | 8 bytes (on 64-bit)


*/