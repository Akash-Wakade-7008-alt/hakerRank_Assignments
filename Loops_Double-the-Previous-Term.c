#include <stdio.h>
#include <math.h>

// Input Format:

// A single integer n.

// Output Format:

// A single line containing the first n terms of the sequence, separated by spaces, starting with '<' and ending with '>'.
// If series doesn't exist, do not print anything.

int main()
{

    int n, res = 1;
    scanf("%d", &n);
    printf("<");
    for (int i = 1; i <= n; i++)
    {

        if (n <= 0)
        {
            return 0;
        }

        printf("%d", res);

        if (i != n)
        {
            printf(" ");
        }

        res *= 2;
    }
    printf(">");

    return 0;
}

// Sample Input 0

// 5
// Sample Output 0

// <1 2 4 8 16>
// Sample Input 1

// 3
// Sample Output 1

// <1 2 4>