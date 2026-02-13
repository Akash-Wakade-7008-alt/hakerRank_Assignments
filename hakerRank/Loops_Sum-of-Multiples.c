#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Given a positive integer n, find the sum of all integers from 1 to n (inclusive) that are divisible by 3, 5, or 7.

// You must print the result, not return it.

// Input Format:

// A single integer input: n

// Output Format:

// Print a single integer — the sum of all numbers in the given range divisible by 3, 5, or 7

int main()
{

    int N, sum = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}

// Sample Input 0

// 7
// Sample Output 0

// 21
// Explanation 0

// Numbers in the range [1, 7] that are divisible by 3, 5, or 7 are 3, 5, 6, 7.
// The sum of these numbers is 21

// Sample Input 1

// 10
// Sample Output 1

// 40