#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char alphabet_1;
    scanf("%c",&alphabet_1);
    
char alphabet_2=alphabet_1-32;
    printf("The uppercase of %c is %c",alphabet_1,alphabet_2);

    return 0;
}
