#include <stdio.h>

// The shape(triangle) is classified as:

// Equilateral: All three sticks are of the same length.
// Isosceles: Exactly two sticks are of the same length.
// Scalene: All three sticks have different lengths.
// However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

// Input Format

// Three space-separated integers (a,b,c) representing the lengths of the sticks.

// Output Format

// Print 3 different messages based on the input:

//  1. Lengths of the Sticks:
// "Lengths: [a, b, c]"

// 2. Triangle Type:
// "Type: Equilateral"
// "Type: Isosceles"
// "Type: Scalene"
// "Type: Invalid"

// 3. Shape Characteristics:
// "All sides are of the same length."
// "Exactly two sides are equal."
// "All sides are of different lengths."
// "Cannot form a valid shape."

int main()
{

    int side_1, side_2, side_3;

    scanf("%d %d %d", &side_1, &side_2, &side_3);
    if (side_1 == side_2 && side_2 == side_3 && side_3 == side_1)
    {
        printf("Lengths: [%d, %d, %d]\n", side_1, side_2, side_3);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.");
    }

    else if (side_1 == side_2 || side_2 == side_3 || side_3 == side_1)
    {
        printf("Lengths: [%d, %d, %d]\n", side_1, side_2, side_3);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.");
    }

    else if (side_1 + side_2 <= side_3 || side_2 + side_3 <= side_1 || side_3 + side_1 <= side_2)
    {
        printf("Lengths: [%d, %d, %d]\n", side_1, side_2, side_3);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }

    else if (side_1 != side_2 && side_2 != side_3 && side_3 != side_1)
    {
        printf("Lengths: [%d, %d, %d]\n", side_1, side_2, side_3);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.");
    }

    return 0;
}

// Sample Input 0

// 6 6 6
// Sample Output 0

// Lengths: [6, 6, 6]
// Type: Equilateral
// All sides are of the same length.
// Sample Input 1

// 8 8 10
// Sample Output 1

// Lengths: [8, 8, 10]
// Type: Isosceles
// Exactly two sides are equal.
// Sample Input 2

// 5 9 7
// Sample Output 2

// Lengths: [5, 9, 7]
// Type: Scalene
// All sides are of different lengths.
// Sample Input 3

// 1 2 3
// Sample Output 3

// Lengths: [1, 2, 3]
// Type: Invalid
// Cannot form a valid shape.