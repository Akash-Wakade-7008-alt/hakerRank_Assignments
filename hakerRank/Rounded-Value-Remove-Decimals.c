#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// Single float.

// Output Format:

// Single line printing the result as: Rounded Value = {value}

int main()
{

    float n;
    scanf("%f", &n);

    int value = n;

    printf("Rounded Value = %d", value);

    return 0;
}

// Sample Input 0

// 3.14
// Sample Output 0

// Rounded Value = 3
// Sample Input 1

// 10.48
// Sample Output 1

// Rounded Value = 10
// Sample Input 2

// -8.3
// Sample Output 2

// Rounded Value = -8