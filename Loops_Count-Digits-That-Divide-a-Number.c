#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


Given a positive integer num, count how many of its digits divide num evenly.

A digit d divides num if:

num % d == 0
You must print the count, not return it.

Input Format:

A single integer: num


Output Format:

Print a single integer — the count of digits that divide num



int main() {

    int num,count;
    
    
    scanf("%d",&num);
    
    int original = num;
    
    while(num>0)
    {
        int digit=num%10;
        
        if((original%digit)==0)
        {
            count++;
        }
        
        num=num/10;
        
    }
    printf("%d",count);
    
    return 0;
}
