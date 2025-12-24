#include <stdio.h>

// Input Format:
// A single integer N

// Output Format:
// Print Even if N is an even number.
// Print Odd if N is an odd number.

int main() {

 int num;
    scanf("%d",&num);
    if((num&1)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}