#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.

// Input Format:

// The first line contains an integer n, the number of elements in the array.
// The second line contains n space-separated integers.

// Output Format:

// Print "Sorted" if the array is sorted in non-decreasing order.
// Otherwise, print "Not Sorted".

int main()
{

    int N;

    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    int i;

    while (a[i + 1] > a[i])
    {
        ++i;
    }

    if (i == N - 1)
    {
        printf("Sorted");
    }

    else
    {
        printf("Not Sorted");
    }

    return 0;
}

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// Sorted
// Sample Input 1

// 5
// 1 3 2 4 5
// Sample Output 1

// Not Sorted