#include <stdio.h>

// Input Format

// A single integer n representing the number.
// A single integer i representing the bit position to extract.

// Output Format

// Output a single integer, which is the value of the i-th bit of n (either 0 or 1)

int main()
{

    int n, i;

    scanf("%d %d", &n, &i);

    int a = 1 << i;

    if ((n & a) == 0)
    {
        printf("0");
    }

    else
    {
        printf("1");
    }

    return 0;
}

// Sample Input 0

// 21 2
// Sample Output 0

// 1
// Sample Input 1

// 0 5
// Sample Output 1

// 0