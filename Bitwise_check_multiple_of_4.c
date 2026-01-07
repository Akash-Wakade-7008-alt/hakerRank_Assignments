#include <stdio.h>

// Write a program to check if a given integer n is a multiple of 4 using only bitwise operators. You are not allowed to use the modulus operator (%), division operator (/), or loops. Use bitwise operations to determine the result efficiently.

// Input Format

// A single integer n.

// Output Format

// Print "Yes" if the number is a multiple of 4.
// Print "No" otherwise

int main()
{

    int n, x;
    scanf("%d", &n);

    x = n & 3;
    if (x == 0)
    {
        printf("Yes");
    }

    else
    {
        printf("No ");
    }

    return 0;
}

// Sample Input 0

// 4
// Sample Output 0

// Yes
// Sample Input 1

// 400
// Sample Output 1

// Yes