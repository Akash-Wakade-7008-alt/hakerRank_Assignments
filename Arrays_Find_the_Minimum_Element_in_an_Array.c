#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// First line: Integer N
// Second line: N space-separated integers

// Output Format:

// Print the minimum element of the array.

int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d ", &a[i]);
    }

    int min = a[0];

    for (int i = 0; i <= N - 2; i++)
    {
        if (a[i + 1] < a[i])
        {
            min = a[i + 1];
        }
    }

    printf("%d", min);

    return 0;
}

// Sample Input 0

// 5
// 1 3 5 7 9
// Sample Output 0

// 1
// Sample Input 1

// 4
// -5 -2 -9 -1
// Sample Output 1

// -9