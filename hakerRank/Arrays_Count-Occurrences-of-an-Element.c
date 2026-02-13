#include <stdio.h>

// Input Format:

// The first line contains an integer n, the number of elements in the array.
// The second line contains n space-separated integers representing the array elements.
// The third line contains a single integer, the target element whose occurrences you need to count.

// Output Format:

// Print a single integer representing the number of times the target element occurs in the array.

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
        if (a[i] == K)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

// Sample Input 0

// 6
// 1 2 3 2 4 2
// 2
// Sample Output 0

// 3
// Sample Input 1

// 5
// 10 20 30 40 50
// 25
// Sample Output 1

// 0
