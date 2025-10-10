


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