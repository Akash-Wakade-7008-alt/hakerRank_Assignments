#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// First line: An integer N, the size of the array
// Second line: N space-separated integers

// Output Format:

// Print the maximum element of the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (int i = 1; i <= N - 1; i++)
    {
        if (a[i+1] > a[i])
        {
            max = a[i+1];
        }
    }

    printf("%d", max);

    return 0;
}

// Sample Input 0

// 5
// 1 3 5 7 9
// Sample Output 0

// 9
// Sample Input 1

// 4
// -5 -2 -9 -1
// Sample Output 1

// -1