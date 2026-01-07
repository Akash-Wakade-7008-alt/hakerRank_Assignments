#include <stdio.h>

int main()
{


for(int i=1;i<=8;i++)
{
    for(int j=1;j<=9-i;j++)
    {
        printf("*");
    }
    printf("\n");
}


}