#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Input Format:
// Two float values: {price} {percent}

// Output Format:
// Single line printing the result as: The final price is: {res}
// Where {res} is the final price printed using %f


float discounted(float price,float percentage){
    
    float discountAmount,discountedPrice,res;
    discountAmount=(price*percentage)/100;
    discountedPrice=price-discountAmount;
     
    return discountedPrice;
}

int main() {
    
    float price=0,percentage=0,res;
    scanf("%f %f",&price,&percentage);
    res=discounted(price,percentage);
    printf("The final price is: %f",res);
    
    return 0;
}
