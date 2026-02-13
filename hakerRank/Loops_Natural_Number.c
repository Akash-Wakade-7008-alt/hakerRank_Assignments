#include <stdio.h>

// Input Format

// A single positive integer, N, representing the range limit.

// Output Format

// Print all natural numbers from 1 to N, separated by a space.

int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

// Sample Input 0

// 5
// Sample Output 0

// 1 2 3 4 5
// Sample Input 1

// 10
// Sample Output 1

// 1 2 3 4 5 6 7 8 9 10
