#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers
// Third line: An integer K

// Output Format:

// Print a single integer representing the count of elements strictly greater than K.

int main()
{

    int N, K, count;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &K);

    for (int i = 0; i <= N - 1; i++)
    {
        if (a[i] > K)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

// Sample Input 0

// 5
// 1 3 5 7 9
// 4
// Sample Output 0

// 3
// Sample Input 1

// 4
// -5 -2 -9 -1
// -3
// Sample Output 1

// 2