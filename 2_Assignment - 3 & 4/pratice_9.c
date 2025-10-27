

#include <stdio.h>

int main()
{
    
int n = 300;       // 0x012C in hex
char *p = (char *)&n;
printf("%d\n", *p);




    return 0;
}


