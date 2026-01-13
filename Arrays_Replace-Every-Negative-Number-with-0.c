#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// input Format:

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers

// Output Format:

// Print the updated array after replacing all negative numbers with 0.
// Elements must be printed in a single line, space-separated.

int main()
{

    int N;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= N - 1; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
    }

    for (int i = 0; i <= N - 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// Sample Input 0

// 5
// 1 -2 3 -4 5
// Sample Output 0

// 1 0 3 0 5
// Sample Input 1

// 4
// -1 -2 -3 -4
// Sample Output 1

// 0 0 0 0
// Sample Input 2

// 1
// -5
// Sample Output 2

// 0
