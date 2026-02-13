#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", i * i);
    }
    return 0;
}

// Sample Input 0

// 5
// Sample Output 0

// 1 4 9 16 25
// Sample Input 1

// 12
// Sample Output 1

// 1 4 9 16 25 36 49 64 81 100 121 144
