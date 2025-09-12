

/* 8. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots */


#include <stdio.h>

int main()
{
    float a, b, c, D;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0)
        printf("Roots are Real and Distinct\n");
    else if (D == 0)
        printf("Roots are Real and Equal\n");
    else
        printf("Roots are Imaginary\n");

    return 0;
}



/* 
The quadratic equation is:

                            ax2+bx+c=0

The discriminant (D) is:

                            D=b2−4ac

If D > 0 → Roots are Real & Distinct

a = 1, b = 5, c = 6
D = (5*5) - (4*1*6) = 25 - 24 = 1  > 0
✅ Roots are Real & Distinct


If D == 0 → Roots are Real & Equal

a = 1, b = 2, c = 1
D = (2*2) - (4*1*1) = 4 - 4 = 0
✅ Roots are Real & Equal


If D < 0 → Roots are Imaginary

a = 1, b = 2, c = 5
D = (2*2) - (4*1*5) = 4 - 20 = -16  < 0
✅ Roots are Imaginary

*/