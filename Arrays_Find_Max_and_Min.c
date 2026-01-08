#include <stdio.h>

// Input Format:

// The first line contains an integer N, the number of elements in the array.
// The second line contains N space-separated integers A[i], representing the elements of the array.

// Output Format:

// Print two space-separated integers: the maximum and minimum values in the array.

int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0];

    for (int i = 1; i <= N - 2; i++)
    {
        if (a[i + 1] < a[i])
        {
            min = a[i + 1];
        }

        else if (a[i + 1] > a[i])
        {
            max = a[i + 1];
        }
    }

    printf("%d %d", max, min);

    return 0;
}

// Sample Input 0

// 5
// 1 3 5 7 9
// Sample Output 0

// 9 1
// Sample Input 1

// 4
// -5 -2 -9 -1
// Sample Output 1

// -1 -9
