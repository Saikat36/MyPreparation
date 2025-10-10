

/*          some question & ans about pointers         */


#include <stdio.h>

int main()
{
    char *str = "Hello";    
    //str[0] = 'M';           // ❌ Wrong: You cannot modify a string literal.
    printf("%s\n", str);

/* → Compilation allowed but at runtime = Undefined Behavior (likely crash).
So output is unpredictable (crash or garbage) — not "Mello". */

    return 0;
}

/* literal = read-only */

/* If you want "Mello", then use:


char str[] = "Hello"; // ✅ array, modifiable
str[0] = 'M';
printf("%s\n", str);  // prints "Mello"


*/