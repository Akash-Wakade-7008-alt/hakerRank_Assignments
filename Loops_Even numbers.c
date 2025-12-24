#include <stdio.h>

// Input Format

// A single positive integer, N, representing the range limit.

// Output Format

// Print all even numbers from 1 to N (inclusive), separated by a space.

int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}

// Sample Input 0

// 10
// Sample Output 0

// 2 4 6 8 10
// Sample Input 1

// 15
// Sample Output 1

// 2 4 6 8 10 12 14