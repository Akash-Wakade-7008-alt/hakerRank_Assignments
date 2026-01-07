#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i <= N - 1; i++)
    {
        scanf("%d ", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i <= N - 1; i++)
    {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}
