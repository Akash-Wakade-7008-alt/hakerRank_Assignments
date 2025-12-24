#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Given a positive integer n, PRINT the smallest positive integer that is a multiple of both 2 and n.

// Input Format

// Single integer input: {n}

// Output Format

// Print the result: {calculated_num}

int main()
{

    int n, x;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d", n);
    }

    else if (n % 2 == 1)
    {
        x = n * 2;
        printf("%d", x);
    }

    return 0;
}

// Sample Input 0

// 5
// Sample Output 0

// 10
// Sample Input 1

// 6
// Sample Output 1

// 6
// Submissions: 95
// Max Score: 10
// Difficulty: Medium
// Rate This Challenge:

// More
