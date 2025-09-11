


#include <stdio.h>

int main() 
{
    const char *s = "A";      // pointer to literal
    char arr[] = "A";      // array with its own copy

    // s[0] = 'B';      // ❌ crash (undefined behavior)
    arr[0] = 'B';       // ✅ works

    printf("s: %s\n", s);
    printf("arr: %s\n", arr);

    return 0;
}
