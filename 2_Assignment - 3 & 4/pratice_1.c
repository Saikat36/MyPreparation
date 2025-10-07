

#include <stdio.h>

int main()
{
    int x = 10;                 // 10 is an integer literal
    char *s  = "Hello";         // pointer to literal (read-only)
    const char *s1 = "A";       // 'A' is a character literal (read-only)
    char *s2 = "Hello";         // "Hello" is a string literal (same literal as s)
    char arr[] = "Hello";       // array with writable copy

    // s[0] = 'M';                 // ❌ undefined behavior
    // s1[0] = 'B';                // ❌ crash (undefined behavior)
    arr[0] = 'B';               // ✅ works

    printf("%s\n", s);          // may crash or show garbage
    printf("arr: %s\n", arr);   // arr: B

    return 0;
}


/* 

    Literal = a fixed constant directly written in code (like "Hello", 10, 'A').


═══════════════════════════════════════════════════════════════════════
📍 STACK AREA (local variables)      ← grows downward
═══════════════════════════════════════════════════════════════════════

Address Range   | Variable   | Stored Value (address)   | Meaning
────────────────┼────────────┼──────────────────────────┼─────────────────────────────
5000–5003       | s          | 8000                     | points to "Hello"
5004–5007       | s1         | 8010                     | points to "A"
5008–5011       | s2         | 8000                     | points to same "Hello" literal
5012–5017       | arr[0..5]  | 'H','e','l','l','o','\0' | writable copy of "Hello"

───────────────────────────────────────────────────────────────────────
📍 READ-ONLY AREA (string literals)     ← fixed in program memory
───────────────────────────────────────────────────────────────────────

Address  | Content     | Meaning
─────────┼─────────────┼────────────────────────
8000     | 'H'         |
8001     | 'e'         |
8002     | 'l'         |
8003     | 'l'         |
8004     | 'o'         |
8005     | '\0'        | ← end of literal "Hello"

8010     | 'A'         |
8011     | '\0'        | ← end of literal "A"

───────────────────────────────────────────────────────────────────────
📍 Visual Overview
───────────────────────────────────────────────────────────────────────

   ┌──────────────────────────────┐
   │ STACK AREA                   │
   ├──────────────────────────────┤
   │ 5000: s  → 8000 ─────────┐   │
   │ 5004: s1 → 8010 ───────┐ │   │
   │ 5008: s2 → 8000 ─────┐ │ │   │
   │ 5012: arr[] = "Hello"│ │ │   │ (writable copy)
   └──────────────────────────────┘ 
               │  │  │  │
               ▼  ▼  ▼  ▼
   ┌──────────────────────────────┐
   │ READ-ONLY AREA (Literals)    │
   ├──────────────────────────────┤
   │ 8000:'H' 8001:'e' 8002:'l'   │
   │ 8003:'l' 8004:'o' 8005:'\0'  │ ← "Hello" literal (shared by s & s2)
   │ 8010:'A' 8011:'\0'           │ ← "A" literal
   └──────────────────────────────┘

───────────────────────────────────────────────────────────────────────
📍 BEHAVIOR NOTES
───────────────────────────────────────────────────────────────────────

✅ `arr`  
- Stored in stack  
- Own copy of `"Hello"`  
- Writable — modifying `arr[0] = 'B' ` is valid.

⚠️ `s`, `s1`, `s2`  
- Stored in stack, but **they only hold addresses** of literals.  
- The literals `"Hello"` and `"A"` live in **read-only memory**.  
- Attempting to modify `s[0] = 'M'` causes **undefined behavior**  
  (can crash, do nothing, or corrupt memory).

---

🔍 WHY `s` and `s2` both point to 8000

it looks like "Hello" appears twice,
so you might expect two separate copies of "Hello" in memory.
But actually... there’s usually only one.

🧠 Reason — “String Literal Pooling” (a.k.a. Literal Merging)

When you write the same string literal more than once in your program —
like "Hello" here — the compiler sees that they are identical.

So, to save memory, the compiler performs an optimization called
🧩 String Literal Pooling (or Constant Merging).

That means:  All identical string literals are stored only once in read-only memory,
and all pointers to that literal refer to the same memory location.


| Variable | Initialization | Points to Address | Literal content          |
| -------- | -------------- | ----------------- | ------------------------ |
| `s`      | `"Hello"`      | 8000              | 'H','e','l','l','o','\0' |
| `s2`     | `"Hello"`      | 8000              | 'H','e','l','l','o','\0' |

So both s and s2 point to the same memory block at address 8000.

---

### ⚙️ POINTER SIZE (why the 4-byte gap)
Assuming a **32-bit system**:
- Each pointer (`s`, `s1`, `s2`) = 4 bytes.
- Hence:  
  - `s` → at 5000  
  - `s1` → at 5004  
  - `s2` → at 5008  

If it were a **64-bit system**, each pointer would take **8 bytes**, and  
addresses would go 5000, 5008, 5016, etc.

---
  
═══════════════════════════════════════════════════════════════════════
✅ MEMORY SUMMARY TABLE
═══════════════════════════════════════════════════════════════════════

Variable | Type         | Address | Value Stored            | Points To  | Writable? | Region of Target
─────────┼──────────────┼─────────┼─────────────────────────┼────────────┼───────────┼────────────────
🟥 s     | char *       | 5000    | 8000                    | "Hello"    | ❌ No    | Read-only
🟥 s1    | const char * | 5004    | 8010                    | "A"        | ❌ No    | Read-only
🟥 s2    | char *       | 5008    | 8000                    | "Hello"    | ❌ No    | Read-only
🟩 arr   | char[6]      | 5012    | 'H','e','l','l','o','\0'| (own copy) | ✅ Yes   | Stack (Writable)

───────────────────────────────────────────────────────────────────────
🟥 = Read-only memory region (string literal)
🟩 = Writable memory region (stack)
───────────────────────────────────────────────────────────────────────



🔹 Understanding :   const char *s1 = "A";


This means:

"A" → is a string literal stored in read-only memory (you can’t modify it).

s1 → is a pointer that points to the first character of that string literal.


So in memory:
   ┌──────────┐
   │  'A'     │  <- string literal (read-only)
   │  '\0'    │
   └──────────┘
       ▲
       │
       │
     ┌─────┐
     │  s1 │ ---> points to the literal "A"
     └─────┘


--------------------------------------------------------------------


🔹 Understanding char arr[] = "A";


This is different — it creates an array in writable memory and copies "A" into it.


So memory looks like:

   ┌───────┐
   │ 'A'   │  <- arr[0]
   │ '\0'  │  <- arr[1]
   └───────┘


Now arr has its own copy of "A", and since it’s stored in writable memory (stack), you can modify it safely:


arr[0] = 'B';   // ✅ Works fine

Now it becomes: arr → "B"



*/