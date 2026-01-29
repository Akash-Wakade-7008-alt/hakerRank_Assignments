#include <stdio.h>
#include <string.h>

int main()
{

    char str1[50], str2[50];

    printf("Enter a srting\n");
    scanf("%s", str1);

    int i = 0, j = strlen(str1) - 1, count = 0;

    strcpy(str2, str1);

    while (i < j)
    {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i <= strlen(str1) - 1; i++)
    {
        if (str1[i] == str2[i])
        {
            count++;
        }
    }

    if (count == strlen(str1))
    {
        printf("Given string is a palandrom");
    }

    else
    {
        printf("Given string is not a palandrom");
    }

    return 0;
}