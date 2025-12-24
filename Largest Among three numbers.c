#include <stdio.h>

// Input Format
// The input consists of three integers a, b, and c, separated by spaces.

// Output Format
// Print the largest number among the three integers along with the given message.

int main()
{

    int num_1 = 0, num_2 = 0, num_3 = 0;
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    if (num_1 > num_2 && num_1 > num_3)
    {

        printf("The largest number is : %d", num_1);
    }

    else if (num_2 > num_1 && num_2 > num_3)
    {

        printf("The largest number is : %d", num_2);
    }

    else if (num_3 > num_1 && num_3 > num_2)
    {

        printf("The largest number is : %d", num_3);
    }

    return 0;
}

// Sample Input 0

// 5 10 15
// Sample Output 0

// The largest number is : 15
// Sample Input 1

// 88 76 76
// Sample Output 1

// The largest number is : 88