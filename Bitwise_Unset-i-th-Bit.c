#include <stdio.h>

// Input Format:

// The first line contains an integer n.
// The second line contains an integer i.

// Output Format:

// Print the updated value of n after unsetting the i-th bit.

int main()
{

    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);

    n = n & ~(1 << i);

    printf("%d", n);

    return 0;
}

// Sample Input 0

// 5
// 1
// Sample Output 0

// 5
// Sample Input 1

// 29
// 3
// Sample Output 1

// 21
