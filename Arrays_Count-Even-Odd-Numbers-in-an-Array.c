#include <stdio.h>

Input Format:

The first line contains an integer n — the number of elements in the array.
The second line contains n space-separated integers arr[] where each element arr[i] represents the i-th element of the array.

Output Format:

Print two space-separated integers: the count of even numbers followed by the count of odd numbers in the array.

int main()
{

    int N = 0, count_even = 0, count_odd = 0;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= N - 1; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_even++;
        }

        else
        {
            count_odd++;
        }
    }

    printf("%d %d ", count_even, count_odd);

    return 0;
}