#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Given an array of integers, calculate the average value of all elements in the array and count how many elements are strictly greater than the average.

// The average is defined as: (sum of all elements) / N
// Comparison must be strictly greater (>), not greater than or equal to
// Input Format:

// First line: Integer N
// Second line: N space-separated integers

// Output Format:

// Print a single integer — the count of elements strictly greater than the average.

int main()
{

    int N, count = 0, sum = 0, avg;

    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= N - 1; i++)
    {
        sum += a[i];
    }

    avg = sum / N;

    for (int i = 0; i <= N - 1; i++)
    {
        if (a[i] > avg)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

//  Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 2
// Sample Input 1

// 4
// 10 10 10 10
// Sample Output 1

// 0
// Sample Input 2

// 1
// 5
// Sample Output 2

// 0
