#include <stdio.h>

// Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

// Input Format:

// Two space-separated integers a and b.

// Output Format:

// Print the smaller of the two integers.

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int k = ((a - b) >> 31) & 1;
    int mn = a * k + b * (1 - k);

    printf("%d", mn);
    return 0;
}

// Sample Input 0

// 5 3
// Sample Output 0

// 3
// Sample Input 1

// -7 2
// Sample Output 1

// -7