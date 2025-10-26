
/*          🧠 Topic : Endian        */

#include <stdio.h>

int main()
{
    int n = 258;
    char *p = (char *)&n;
    printf("%d\n", *p);

    return 0;
}

/*

💡 Step 1: Convert 258 to binary

| Decimal |                Binary                  |
| ------- | -------------------------------------- |
| 258     | 00000000  00000000  00000001  00000010 |


1. Each group of 8 bits (8 binary digits) = 1 byte.

2. So 258 takes 2 bytes in binary — but int is usually 4 bytes.



Now, let’s split these 4 groups into boxes 👇


| Box  | Address | Binary   | Hex  | Decimal |
| ---- | ------- | -------- | ---- | ------- |
| Box1 | 1000    | 00000000 | 0x00 | 0       |
| Box2 | 1001    | 00000000 | 0x00 | 0       |
| Box3 | 1002    | 00000001 | 0x01 | 1       |
| Box4 | 1003    | 00000010 | 0x02 | 2       |

👉 Every address = 1 byte (8 bits)


✅ So that’s why we say:

    Box1 in Decimal = 00
    Box2 in Decimal = 00 
    Box3 in Decimal = 01
    Box4 in Decimal = 02


Because those are the byte-sized pieces that make up the number 258.



--------------------------Step 2--------------------------


💾 Step 2: Big-Endian vs Little-Endian Memory

Now let’s imagine the computer has 4 boxes (memory cells) to store those 4 bytes.

We’ll assign each a fake address —
say memory starts at address 1000.


    🟥 Big-Endian (Big part first — normal order)

Address →   1000   1001   1002   1003
Value   →   [00]   [00]   [01]   [02]
             ↑             ↑
       Most Significant   Least Significant
       (biggest part)
             ↑
           *p points here


➡️ The “biggest part” of the number (00 00 01 02) is stored from left to right — like how we read numbers in English.

➡️ Big-endian writes it as “2 5 8” (normal order).

➡️ Big-endian, Box1 = 00000000 = 0

---------------------------------------------------------------

    🟨 Little-Endian (Small part first — reversed order)

Address →   1000   1001   1002   1003
Value   →   [02]   [01]   [00]   [00]
             ↑              ↑
       Least Significant   Most Significant(biggest Part)
             ↑
           *p points here

➡️ Here, the smallest part (02) is stored first, and the biggest part (00) last.

➡️ Little-endian writes it as “8 5 2” (backwards order).

➡️ Little-endian, Box1 = 00000010 = 2


🧩 Visualization (Color-coded Boxes)

| Endian Type      | Memory Order (Lowest → Highest Address)|
| -----------------| ---------------------------------------|
| 🟥 Big-Endian    | 🟦00 🟪00 🟩01 🟨02                 |
| 🟩 Little-Endian | 🟨02 🟩01 🟪00 🟦00                 |



--------------------------Step 3--------------------------


💬 Step 3: What Happens in Code

int n = 258;
char *p = (char*)&n;
printf("%d\n", *p);


Let’s explain this:

👉 &n : means “address of n” → (like saying "start of our 4 boxes").

👉 (char*)&n : means “treat those 4 boxes as characters (1-byte pieces)”
instead of as a 4-byte integer.

👉 *p : means “look inside the first box”.


⚙️ Now, the important conclusion:

|   System Type     | Memory Layout (low → high) | *p points to | Printed Value |
| ----------------- | -------------------------- | ------------ | ------------- |
| **Little-endian** |  [02] [01] [00] [00]       |    02        |  2            |
| **Big-endian**    |  [00] [00] [01] [02]       |    00        |  0            |

-------------------------------------------------|
so  🟥 Big-Endian = *p = value at 1000 = 00
and 🟩 Little-Endian = *p = value at 1000 = 02
-------------------------------------------------|


🌈 In One Line:

“Endian” just decides whether the computer keeps the big part first or small part first when storing numbers in memory.



*/