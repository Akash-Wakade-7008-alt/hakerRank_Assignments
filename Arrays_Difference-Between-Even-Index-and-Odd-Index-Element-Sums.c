#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:git

// First line: Integer N
// Second line: N space-separated integers

// Output Format:

// Print a single integer representing the required difference.

int main()
{

    int N = 0, sum_even = 0, sum_odd = 0, diff;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= N - 1; i++)
    {

        if (i % 2 == 0)
        {
            sum_even += a[i];
        }

        else
        {
            sum_odd += a[i];
        }
    }

    diff = sum_even - sum_odd;
    printf("%d", diff);

    return 0;
}

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 3
// Sample Input 1

// 4
// 10 10 10 10
// Sample Output 1

// 0
// Sample Input 2

// 1
// 0
// Sample Output 2

// 0
