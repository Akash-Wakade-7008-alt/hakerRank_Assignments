#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


On a number line starting from 1, two points begin moving forward.

The first point jumps forward by A units at a time.
The second point jumps forward by B units at a time.
Both points can only land on numbers that are multiples of their jump length.

The mathematician observing the number line wants to know:

At what smallest positive number will both points land together for the first time?
Task:

Given two natural numbers A and B, determine the smallest positive integer that is a multiple of both numbers.

Input Format:

A single line containing two space-separated natural numbers A and B.




Output Format:

Print a single integer — the first common landing point of both sequences i.e. LCM.





int main() {
     
    int A,B;
    scanf("%d %d",&A,&B);
    for(int i=1;i>=1;i++)
    {
        if(i%A==0 && i%B==0)
        {
            printf("%d",i);
            break;
        }
    }
    
    
    
  
    return 0;
}
