#include <stdio.h>

// Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.

// The program should take two integers, A and B, as input and output the swapped values.

// Input Format:

// The first line contains an integer A
// The second line contains an integer B

// Output Format:

// The first line contains the swapped value of A.
// The second line contains the swapped value of B.

int main()
{

    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    A = A ^ B;
    B = A ^ B;
    A = A ^ B;

    printf("%d\n%d", A, B);
    return 0;
}

// Sample Input 0

// 5
// 10
// Sample Output 0

// 10
// 5
// Sample Input 1

// -7
// 14
// Sample Output 1

// 14
// -7
