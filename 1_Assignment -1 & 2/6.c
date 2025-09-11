

/* 6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes) */


#include<stdio.h>

int main()
{
    /* 
        if I write - 
        
        printf( "\"Teacher\'s Day" \");  This is Wrong ❌
                        ⏸
                        ⏸
        printf("...string finished..." \");  // ❌ nonsense to compiler

    */

    printf("\"Teacher\'s Day\"");    // This is right ✅ bcz  \"  → prints "


    return 0;
}


/* 

        \"   → prints "

        \'   → prints '

        \"   → prints another "

        Closing " (string end)

*/