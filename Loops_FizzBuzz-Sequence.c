#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

Write a program that prints a sequence of values from 1 to N following the rules of the classic FizzBuzz problem.

Instead of printing all values on a single line, each value must be printed on a new line.

Rules:

For numbers that are multiples of 3, print Fizz
For numbers that are multiples of 5, print Buzz
For numbers that are multiples of both 3 and 5, print FizzBuzz
For all other numbers, print the number itself

Input Format:

A single integer N


Output Format:

Print the FizzBuzz sequence from 1 to N, each value on a separate line.




int main() {

   int N;
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++)
    {
        if(i%15==0)
        {
            printf("FizzBuzz\n");
        }
        
        else if(i%3==0)
        {
            printf("Fizz\n");
        }
        
        else if(i%5==0)
        {
            printf("Buzz\n");
        }
        
        else
        {
            printf("%d\n",i);
        }   
        
    }
    
    
    return 0;
}
