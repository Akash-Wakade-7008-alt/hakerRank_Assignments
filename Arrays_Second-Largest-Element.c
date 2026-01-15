#include <stdio.h>
#include <limits.h>

// Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.

// Function Signature

// int findSecondLargest(int arr[], int n);

// Input Format:

// The function will receive:
// An integer n, the number of elements in the array.
// An integer array arr[] of size n, where arr[i] represents the i-th element.

// Output Format:

// Return the second largest element in the array.
// If there is no valid second largest element, return -1.

int findSecondLargest(int arr[], int n)
{
    int max = arr[0];
    int secondLargest = arr[0];

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {

        if (arr[i] > secondLargest)
        {

            if (arr[i] == max)
            {
                continue;
            }

            else
            {
                secondLargest = arr[i];
            }
        }
    }

    return secondLargest;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}

// Sample Input 0

// 5
// 1 3 4 5 2
// Sample Output 0

// 4
// Sample Input 1

// 4
// 7 7 7 7
// Sample Output 1

// -1