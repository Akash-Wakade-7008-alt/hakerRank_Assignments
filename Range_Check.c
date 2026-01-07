#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:
// Three space separated integers: {n} {low} {high}

// Output Format:
// You must print:
// "In Range" or "Out of Range"

int main() {

int n=0,low=0,high=0;
    scanf("%d %d %d",&n,&low,&high);
    if(n>=low && n<=high){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
