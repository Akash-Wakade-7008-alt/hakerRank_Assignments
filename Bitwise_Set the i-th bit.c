#include <stdio.h>

// input Format:
// The first line contains an integer n.
// The second line contains an integer i.

// Output Format:
// Print the updated value of n after setting the i-th bit.

int main() {

    int num,i;
    scanf("%d",&num);
    scanf("%d",&i);
    
    int res=num | (1<<i);
    printf("%d",res);
    return 0;
}