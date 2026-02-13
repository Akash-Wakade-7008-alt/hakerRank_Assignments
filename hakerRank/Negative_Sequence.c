#include <stdio.h>

// Write a program to generate the first n terms of a sequence where the numbers alternate between positive and negative integers, starting with 1.

// Input Format:

// A single integer n.

// Output Format:

// A single line containing the first n terms of the sequence, separated by spaces
int main()
{

    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("-%d ", i);
        }

        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// Sample Input 0

// 10
// Sample Output 0

// 1 -2 3 -4 5 -6 7 -8 9 -10
// Sample Input 1

// 2
// Sample Output 1

// 1 -2