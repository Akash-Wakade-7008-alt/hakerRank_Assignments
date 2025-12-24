#include <stdio.h>

// Categories:

// Category A: N is divisible by 2 and 3 but not divisible by 5.
// Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
// Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
// Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
// Category D: N is a perfect square less than 200.
// Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
// Category E: If none of the above conditions are satisfied.
// Note: Output the category that comes first in lexicographic order.

// Input Format

// A single integer N

int main()
{

    int num;
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0 && num % 5 != 0)
    {
        printf("A");
    }

    else if (num * num < 200)
    {

        printf("D");
    }

    else if (num < 100 && (num % 3 == 0 || num % 7 == 0) && num % 21 != 0)
    {
        printf("C");
    }

    else if (num > 20 && (num % 6 == 0 || num % 10 == 0 || num % 14 == 0 || num % 22 == 0 || num % 15 == 0 || num % 21 == 0 || num % 33 == 0 || num % 35 == 0 || num % 55 == 0 || num % 77 == 0))
    {
        printf("B");
    }

    else if (num * num < 200)
    {

        printf("D");
    }

    else
    {
        printf("E");
    }

    return 0;
}

// Output Format

// A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').

// Sample Input 0

// 18
// Sample Output 0

// A
// Sample Input 1

// 15
// Sample Output 1

// C