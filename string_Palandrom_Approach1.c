#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];

    printf("Enter a srting");
    scanf("%s", str);

    int i = 0, j = strlen(str) - 1, count = 0;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            count++;
        }
        i++;
        j--;
    }

    if (count == (strlen(str)) / 2)
    {
        printf("Given string is an palandrom");
    }

    else
    {
        printf("Given string is not a palandrom");
    }

    return 0;
}