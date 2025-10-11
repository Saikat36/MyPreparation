


/*          some question & ans about pointers         */


/* literal = read-only */


/* 

int x = 65;
int *ptr = &x;
char *cptr = (char*)&x;


Which statement is true?

A) *ptr == *cptr
B) Both print same value always
C) *ptr prints 65, but *cptr prints 'A' (if ASCII)
D) Both point to different addresses 


ans : 

char *cptr = (char*)&x;

This is a typecast pointer → we take the address of x,
but tell the compiler to treat it as a char*, not int*.

So now:

1. cptr still points to same address (1000).

2. But dereferencing *cptr means:
   → read only 1 byte (since char = 1 byte).

At address 1000, first byte = 01000001 = decimal 65 = 'A'.


✅ Correct answers: A and C are both technically correct depending on format specifier.

*/



/* 

const char *s1 = "Hi";
char s2[] = "Hi";

s2[0] = 'B';
s1[0] = 'B';


What happens here?

A) Both lines valid
B) Only s2[0]='B'; is valid
C) Only s1[0]='B'; is valid
D) Both invalid


Ans : 

Only s2[0] = 'B'; is valid ✅
s1[0] = 'B'; ❌ (Undefined behavior / crash)


Reason:

s1 → pointer to string literal (read-only).
s2 → array copy (modifiable)

literal = read-only

*/