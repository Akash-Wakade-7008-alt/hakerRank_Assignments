#include <stdio.h>

// Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

// Input Format:

// A single integer n

// Output Format:

// Output the count of set bits in the first 4 bits of n

int main()
{

    int n;
    scanf("%d", &n);

    int x = n & 15;
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        count += (x >> i) & 1;
    }

    printf("%d", count);
    return 0;
}

// Sample Input 0

// 29
// Sample Output 0

// 3
// Sample Input 1

// 15
// Sample Output 1

// 4