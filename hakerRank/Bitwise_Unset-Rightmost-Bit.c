#include <stdio.h>

// Input Format:

// A single integer n.

// Output Format:

// Output the integer n after clearing its rightmost set bit.

// Key Logic :When you subtract 1 from any number "n" the  only last bit become zero "n-1"
//            after multiplying n and n-1 you will get final result.

int main()
{

    int n, x;
    scanf("%d", &n);

    x = n & (n - 1);

    printf("%d", x);
    return 0;
}

// Sample Input 0

// 18
// Sample Output 0

// 16
// Sample Input 1

// 8
// Sample Output 1

// 0