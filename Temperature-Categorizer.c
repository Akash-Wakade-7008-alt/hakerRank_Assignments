#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// You are given an integer temperature t.

// Classify it as:

// Temperature     |       Category
// t < 0           |       Freezing
// 0 ≤ t ≤ 30      |       Normal
// t > 30          |       Hot
// Input Format

// Single integer input: {t}

// Output Format

// You must print: "Freezing" or "Normal" or "Hot"

int main()
{

    int temp;
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing");
    }

    else if (temp >= 0 && temp <= 30)
    {
        printf("Normal");
    }

    else
    {
        printf("Hot");
    }

    return 0;
}

// Sample Input 0

// -5
// Sample Output 0

// Freezing
// Sample Input 1

// 25
// Sample Output 1

// Normal
// Sample Input 2

// 45
// Sample Output 2

// Hot