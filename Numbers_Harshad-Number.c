#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:

// A single integer 𝑁.

// Output Format:

// Print,"[N] is a harshad number" if N is a Harshad number.
// Print, "[N] is not a harshad number" otherwise.

int main()
{

    int N = 0, firstD = 0, secondD = 0, thirdD = 0, fourthD = 0, res;
    scanf("%d", &N);

    firstD = N % 10;
    secondD = (N / 10) % 10;
    thirdD = (N / 100) % 10;
    fourthD = N / 1000;

    res = firstD + secondD + thirdD + fourthD;

    if (N % res == 0)
    {
        printf("%d is a harshad number", N);
    }

    else
    {
        printf("%d is not a harshad number", N);
    }
    return 0;
}

// Sample Input 0

// 4077
// Sample Output 0

// 4077 is not a harshad number
// Sample Input 1

// 5833
// Sample Output 1

// 5833 is a harshad number
// Explanation 1

// 5 + 8 + 3 + 3 = 19
// 5833 is divisible by 19.
