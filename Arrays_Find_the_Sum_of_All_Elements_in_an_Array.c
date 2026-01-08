#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers

// Output Format:

// Print the sum of all elements in the array.

int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d ", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i <= N - 1; i++)
    {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 15
// Sample Input 1

// 4
// -5 -10 -15 -20
// Sample Output 1

// -50
