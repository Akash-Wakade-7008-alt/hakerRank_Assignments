#include <stdio.h>
#include <math.h>

// where the discriminant D = b^2 − 4ac determines the type of roots:

// If D>0, print "Real and Distinct"
// If D=0, print "Real and Equal"
// If D<0, print "Complex"
// Note: You may use the sqrt() function from math.h to compute square roots.

// Input Format

// A single line containing three space-separated integers: a b c

// Output Format

// If the roots are real, print:

// Roots: [root1], [root2]
// Type: [TYPE]

int main()
{

    int a, b, c, D;
    float root_1, root_2;
    scanf("%d %d %d", &a, &b, &c);
    D = b * b - 4 * a * c;

    if (D == 0)
    {
        root_1 = (-b) / (2 * a);
        root_2 = root_1;

        printf("Roots: %.2f, %.2f\n", root_1, root_2);
        printf("Type: Real and Equal");
    }

    if (D > 0)
    {
        root_1 = (-b + sqrt(D)) / (2 * a);
        root_2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", root_1, root_2);
        printf("Type: Real and Distinct");
    }

    if (D < 0)
    {
        float realPartOfRoot_1, imaginaryPartOfRoot_1, realPartOfRoot_2, imaginaryPartOfRoot_2;

        realPartOfRoot_1 = (-b) / (2 * a);
        imaginaryPartOfRoot_1 = (sqrt(D)) / (2 * a);
        realPartOfRoot_2 = (-b) / (2 * a);
        imaginaryPartOfRoot_2 = (sqrt(D)) / (2 * a);
        printf("Roots: %.2f  %.2f ", realPartOfRoot_1, imaginaryPartOfRoot_1);
        printf("Roots: %.2f  %.2f ", realPartOfRoot_2, imaginaryPartOfRoot_2);
    }

    return 0;
}

// Sample Input 0

// 1 -3 2
// Sample Output 0

// Roots: 2.00, 1.00
// Type: Real and Distinct
// Sample Input 1

// 1 -2 1
// Sample Output 1

// Roots: 1.00, 1.00
// Type: Real and Equal
// Sample Input 2

// 1 2 5
// Sample Output 2

// Roots: -1.00 + 2.00i, -1.00 - 2.00i
// Type: Complex