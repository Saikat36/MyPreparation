
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


| Decimal |                Binary                  |
| ------- | -------------------------------------- |
| 258     | 00000000  00000000  00000001  00000010 |


1. Each group of 8 bits (8 binary digits) = 1 byte.

2. So 258 takes 2 bytes in binary — but int is usually 4 bytes, so we add two 00 bytes in front (for padding).



Now, let’s split these 4 groups into boxes 👇


| Box  | Binary   | Hexadecimal | Decimal |
| ---- | -------- | ----------- | ------- |
| Box1 | 00000000 | 0x00        | 0       |
| Box2 | 00000000 | 0x00        | 0       |
| Box3 | 00000001 | 0x01        | 1       |
| Box4 | 00000010 | 0x02        | 2       |


✅ So that’s why we say:

    Box1 = 00, Box2 = 00, Box3 = 01, Box4 = 02

Because those are the byte-sized pieces that make up the number 258.






*/