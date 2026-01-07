#include <stdio.h>

// Input Format
// Two unique integers a and b

// Output Format
// Two lines printing the swapped values of a and b

int main()
{

    int a, b, c;

    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}

// Sample Input 0

// 10 5
// Sample Output 0

// a = 5
// b = 10
// Sample Input 1

// -5 6
// Sample Output 1

// a = 6
// b = -5