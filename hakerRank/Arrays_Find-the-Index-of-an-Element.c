#include <stdio.h>

// Input Format:

// The first line contains an integer N, the size of the array.
// The second line contains N space-separated integers, representing the array elements.
// The third line contains a single integer, target, the element to search for.

// Output Format:

// Print the 0-based index of the first occurrence of target in the array.
// If target is not found, print -1.

int main()
{

    int N, M;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &M);

    for (int i = 0; i <= N - 1; i++)
    {
        if (a[i] == M)
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

// Sample Input 0

// 6
// 4 2 7 2 9 5
// 2
// Sample Output 0

// 1
// Sample Input 1

// 5
// 1 3 5 7 9
// 4
// Sample Output 1

// -1
