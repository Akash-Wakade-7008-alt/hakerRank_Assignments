#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char alphabet_1,alphabet_2;
    
    scanf("%c %c",&alphabet_1,&alphabet_2);
    int diff=alphabet_2-alphabet_1;
    printf("The distance between %c and %c is %d",alphabet_1,alphabet_2,diff);
    return 0;
}
