#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// You are given a single integer N.

// Your task is to determine whether N is divisible by 4, using only bitwise operations.

// You are NOT allowed to use the modulo operator (%), multiplication, or division.

// Input Format:

// A single integer N
// (The input will always contain a valid integer literal — no alphabets, no symbols.)

// Output Format:

// Print exactly one of the following:

// Divisible
// Not Divisible
// Out of Range

// (No extra spaces or text.)

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= -pow(2, 31) && N < (pow(2, 31) - 1))
    {

        if ((N & (N - 1)) == 0)
        {
            printf("Divisible");
        }

        else
        {
            printf("Not Divisible");
        }
    }

    else
    {
        printf("Out of Range");
    }

    return 0;
}

//      Sample Input 0

// 16
// Sample Output 0

// Divisible
// Sample Input 1

// 14
// Sample Output 1

// Not Divisible
// Sample Input 2

// -2147483648
// Sample Output 2

// Divisible
