#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:
// Four digits: {A} {B} {C} {D}

// Constraints:
// 0 ≤ each digit ≤ 9

// Output Format:
// Single line printing the result as: The number is: {(ABCD)*5}
// Sample Input 0

int buildNumber(int num_1,int num_2,int num_3,int num_4)
{
int combinedNumber=num_1*1000+num_2*100+num_3*10+num_4;
    int res=combinedNumber*5;
        return res;
}


int main() {

    int num_1=0,num_2=0,num_3=0,num_4=0;
    scanf("%d %d %d %d",&num_1,&num_2,&num_3,&num_4);
     
    int finalRes=buildNumber(num_1,num_2,num_3,num_4);
    printf("The number is: %d",finalRes);
   
    return 0;
}

