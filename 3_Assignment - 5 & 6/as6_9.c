

/* 9. Write a program which takes the length of the sides of a triangle as an input.Display whether the triangle is valid or not. */


#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Triangle validity condition
    
    if (a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid\n");

    else
        printf("The triangle is NOT valid\n");

    return 0;
}
