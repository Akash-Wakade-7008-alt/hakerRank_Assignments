#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:
// Single integer.

// Output Format
// Print the data in the given format: Half of {num} is {halfValue}

int main() {

    int num;
    
    scanf("%d",&num);
    float res=num/2.00;
    printf("Half of %d is %.2f",num,res);
    return 0;
}