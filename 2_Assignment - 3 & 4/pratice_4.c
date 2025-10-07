



/*          🧠 Topic 1: Pointer to Array         */


#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};     // array of 3 integers
    int *p = arr;                  // pointer to first element
    int (*ptr)[3] = &arr;          // pointer to entire array

    printf("p: %p, *p: %d\n", p, *p);          // prints address of arr[0] and its value
    printf("ptr: %p, *ptr: %p\n", ptr, *ptr);  // prints address of arr and arr itself
    printf("(*ptr)[1] = %d\n", (*ptr)[1]);     // access 2nd element through pointer to array

    return 0;
}
