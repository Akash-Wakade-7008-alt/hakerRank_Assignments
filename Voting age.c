#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// input Format
// Single integer input: {age}
// age>=18;

// Output Format
// You must print:
// "Eligible" or "Not Eligible"



int main() {

   int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
