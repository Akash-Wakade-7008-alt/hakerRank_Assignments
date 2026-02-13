#include <stdio.h>

// Input Format:

// The first line contains an integer n.
// The second line contains an integer i.

// Output Format:

// Print the updated value of n after toggling the i-th bit.

int main()
{

    int n, i, x;
    scanf("%d", &n);
    scanf("%d", &i);

    x = n ^ (1 << i);

    printf("%d", x);
    return 0;
}

// Sample Input 0

// 10
// 2
// Sample Output 0

// 14
// Sample Input 1

// 5
// 0
// Sample Output 1

// 4