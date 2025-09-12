


#include <stdio.h>

int main() 
{
    const char *s = "A";      // pointer to literal
    char arr[] = "A";      // array with its own copy

    // s[0] = 'B';      // ❌ crash (undefined behavior)
    arr[0] = 'B';       // ✅ works

    printf("s: %s\n", s);       // s: A
    printf("arr: %s\n", arr);   // arr: B

    return 0;
}
